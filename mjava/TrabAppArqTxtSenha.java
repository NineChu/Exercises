import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class TrabAppArqTxtSenha extends JFrame {

    public static void main(String[] args) {
        new TrabAppArqTxtSenha();
    }

    JTextField f1 = new JTextField(40);

    TrabAppArqTxtSenha() {
        setTitle("Gerenciador de arquivos de texto");
        setSize(600, 70);
        setLocationRelativeTo(null);
        getContentPane().setBackground(Color.YELLOW);
        setResizable(false);

        f1.addKeyListener(new KeyAdapter() {
            public void keyReleased(KeyEvent e) {
                if (f1.getText().equals("senha")) {
                    new TrabAppArqTxt();
                }
            }
        });

        setLayout(new FlowLayout());
        
        add(f1);

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }
}
