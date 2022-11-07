import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

public class TrabAppArqTxt extends JFrame implements ActionListener {

    JLabel l1 = new JLabel("Texto a ser Editado:");
    JTextArea a1 = new JTextArea(10, 50);
    JScrollPane sp1 = new JScrollPane(a1, JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED, JScrollPane.HORIZONTAL_SCROLLBAR_NEVER);

    JPanel p1 = new JPanel();
    JButton b1 = new JButton("Gravar");
    JButton b2 = new JButton("Abrir");
    JButton b3 = new JButton("Limpar");
    JButton b4 = new JButton("Sair");

    JLabel l2 = new JLabel("Status do Arquivo:");
    JTextField f1 = new JTextField(40);

    Font font1 = new Font("", Font.BOLD, 16);

    FileDialog fs;
    FileDialog fl;

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b1) {
            try {
                fs = new FileDialog(new Dialog(this), "Salvando arquivo", FileDialog.SAVE);
                fs.setVisible(true);

                PrintWriter fw = new PrintWriter(fs.getDirectory() + fs.getFile());
                fw.print(a1.getText());
                fw.close();
                f1.setText("Arquivo salvo com sucesso !");
            } catch (Exception ex) {
                f1.setText(String.valueOf(ex));
            }
        } else if (e.getSource() == b2) {
            try {
                fl = new FileDialog(new Dialog(this), "Abrindo arquivo", FileDialog.LOAD);
                fl.setVisible(true);
                
                Scanner fr = new Scanner(new FileReader(fs.getDirectory() + fs.getFile()));
                if (a1.getText() != "") {
                    a1.setText("");
                }
                while (fr.hasNextLine()) {
                    a1.setText(a1.getText() + fr.nextLine() + "\n");
                }
                fr.close();
                f1.setText("Arquivo aberto com sucesso !");
            } catch (Exception ex) {
                f1.setText(String.valueOf(ex));
            }
        } else if (e.getSource() == b3) {
            a1.setText("");
            f1.setText("");
        } else if (e.getSource() == b4) {
            dispatchEvent(new WindowEvent(this, WindowEvent.WINDOW_CLOSING));
        }
    }

    TrabAppArqTxt() {
        setTitle("Gerenciador de arquivos de texto");
        setSize(600, 350);
        setLocationRelativeTo(null);
        getContentPane().setBackground(Color.YELLOW);
        setResizable(false);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        p1.setOpaque(false);
        f1.setEditable(false);
        l1.setFont(font1);
        l2.setFont(font1);

        b1.setPreferredSize(new Dimension(130, 30));
        b2.setPreferredSize(new Dimension(130, 30));
        b3.setPreferredSize(new Dimension(130, 30));
        b4.setPreferredSize(new Dimension(130, 30));

        setLayout(new FlowLayout());

        p1.add(b1);
        p1.add(b2);
        p1.add(b3);
        p1.add(b4);

        add(l1);
        add(sp1);
        add(p1);
        add(l2);
        add(f1);

        setVisible(true);
    }
}
