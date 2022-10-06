import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;

public class Texto extends JFrame implements ActionListener {
    public static void main(String[] args) {
        new Texto();
    }

    JLabel l1 = new JLabel("Texto a ser Editado:");
    JTextArea a1 = new JTextArea(10, 50);
    JButton b1 = new JButton("Gravar");
    JButton b2 = new JButton("Abrir");
    JButton b3 = new JButton("Limpar");
    JButton b4 = new JButton("Sair");
    JLabel l2 = new JLabel("     Status do Arquivo:     ");
    JTextField f1 = new JTextField(40);
    JPanel p1 = new JPanel();
    Font font1 = new Font("", Font.BOLD, 16);
    FileDialog fs;
    FileDialog fl;
    Desktop d = Desktop.getDesktop();
    // JFileChooser fc = new JFileChooser();



    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b1) {
            try {
                fs = new FileDialog(new Dialog(this), "Salvando arquivo...", FileDialog.SAVE);
                fs.setVisible(true);
                PrintWriter fw = new PrintWriter(fs.getDirectory() + fs.getFile());
                fw.print(a1.getText());
                fw.close();
            } catch (Exception ex) {
                f1.setText(String.valueOf(ex));
            }
        } else if (e.getSource() == b2) {
            try {
                fl = new FileDialog(new Dialog(this), "Salvando arquivo...", FileDialog.LOAD);
                fl.setVisible(true);
                BufferedReader fr = new BufferedReader(new FileReader(fl.getDirectory() + fl.getFile()));
                if (a1.getText() != "") {
                    a1.setText("");
                }
                while (fr.readLine()) {
                    a1.setText(a1.getText()+fr.readLine());
                }
                fr.close();
            } catch (Exception ex) {
                f1.setText(String.valueOf(ex));
            }
        } else if (e.getSource() == b3) {
            a1.setText("");
            f1.setText("");
        } else if (e.getSource() == b4) {
            System.exit(0);
        }
    }

    Texto() {
        setTitle("Gerenciador de arquivos de texto");
        setSize(600, 350);
        setLocationRelativeTo(null);
        getContentPane().setBackground(Color.YELLOW);

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
        add(a1);
        add(p1);
        add(l2);
        add(f1);

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }
}
