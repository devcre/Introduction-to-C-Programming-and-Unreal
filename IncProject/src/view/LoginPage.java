package view;

import java.awt.BasicStroke;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.GridBagLayout;
import java.awt.GridLayout;
import java.awt.RenderingHints;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

import javax.swing.JCheckBox;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.Timer;
import javax.swing.border.CompoundBorder;
import javax.swing.border.EmptyBorder;
import javax.swing.border.LineBorder;

import view.LoginPage.ChkPanel;

public class LoginPage extends BasePage {
	JTextField txt[] = new JTextField[2];
	ChkPanel chk;
	JCheckBox chkbox = new JCheckBox();

	public LoginPage() {
		setLayout(new GridBagLayout());

		add(c = sz(new JPanel(new GridLayout(0, 1, 0, 0)), 200, 240));

		c.setBorder(new CompoundBorder(new LineBorder(Color.black), new EmptyBorder(5, 5, 5, 5)));

		c.add(lbl("COVID-19", 0, 25));
		for (int i = 0; i < txt.length; i++) {
			c.add(lbl("ID,PW".split(",")[i], 2, 15));
			c.add(txt[i] = i == 0 ? new JTextField() : new JPasswordField());
		}
		c.add(chk = new ChkPanel());
		c.add(hyplbl("처음이십니까?", 2, 13, Color.ORANGE, e -> mf.swapPage(new SignPage())));
		c.add(btn("로그인", Color.ORANGE, a -> {
			for (var t : txt) {
				System.out.println();
				if (t.getText().isEmpty()) {
					eMsg("빈칸이 있습니다.");
					return;
				}
			}

			if (!chk.isCheck) {
				eMsg("리캡차를 확인해주세요.");
				return;
			}

			if (txt[0].getText().equals("admin") && txt[1].getText().equals("1234")) {
				mf.swapPage(new AdminPage());
				return;
			}

			var rs = getRows("select * from user where id=? and pw=?", txt[0].getText(), txt[1].getText());
			if (rs.isEmpty()) {
				eMsg("아이디 또는 비밀번호가 잘못되었습니다.");
				return;
			}
			
			user = rs.get(0);                          // 사용자가 로그인한 계정
			mf.swapPage(new MainPage(user));
		}));
	}

	class ChkPanel extends JPanel {
		boolean isFocus, isCheck;
		Timer timer;
		int arc = 0;
		
		// 체크박스
		public ChkPanel() {
			super(new FlowLayout(0, 1, 8));

			JCheckBox box = new JCheckBox();
			
			if(isCheck) {
				
			}
			
			add(box, "West");
			add(lbl("로봇이 아닙니다.", 2, 10));
			
			box.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent eve) {
					if(box.isSelected()) {
						new Capcha(ChkPanel.this).setVisible(true);
					}
					
					// 체크박스 한번 체크하면 비활성화
					if(box.isEnabled()) {
						box.setEnabled(false);
					}
				}
				public void itemStateChanged(ItemEvent eve) {
					if(isCheck) {
						box.setEnabled(false);
					}
				}
			});

		}
	}

	public static void main(String[] args) {
		mf.swapPage(new LoginPage());
		mf.setVisible(true);
	}
}
