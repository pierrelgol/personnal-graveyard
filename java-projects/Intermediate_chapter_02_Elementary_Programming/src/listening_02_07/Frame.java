package listening_02_07;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Font;
import java.awt.GridLayout;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

@SuppressWarnings("serial")
public class Frame extends JFrame {

  String currentHour, currentMinute, currentSecond;

  final JLabel hoursLabel, minutesLabel, secondsLabel;

  Frame() {

    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    this.setLayout(new BorderLayout());
    this.setSize(500, 500);

    JPanel mainPanel = new JPanel(new GridLayout(1, 3));
    mainPanel.setSize(500, 500);
    mainPanel.setBackground(Color.black);

    this.hoursLabel = new JLabel();
    hoursLabel.setBackground(Color.black);
    hoursLabel.setForeground(Color.green);
    hoursLabel.setFont(new Font("Moderna", Font.BOLD, 50));
    hoursLabel.setText(currentHour);

    this.minutesLabel = new JLabel();
    minutesLabel.setBackground(Color.black);
    minutesLabel.setForeground(Color.green);
    minutesLabel.setFont(new Font("Moderna", Font.BOLD, 50));
    minutesLabel.setText(currentMinute);

    this.secondsLabel = new JLabel();
    secondsLabel.setBackground(Color.black);
    secondsLabel.setForeground(Color.green);
    secondsLabel.setFont(new Font("Moderna", Font.BOLD, 50));
    secondsLabel.setText(currentSecond);

    mainPanel.add(hoursLabel);
    mainPanel.add(minutesLabel);
    mainPanel.add(secondsLabel);
    mainPanel.setVisible(true);

    this.add(mainPanel, BorderLayout.CENTER);
    this.repaint();
    this.revalidate();
    this.setVisible(true);

  }
  public void updateHourText() {
    currentHour = Integer.toString(Clock.currentHour());
    this.hoursLabel.setText(currentHour);

  }
  public void updateMinutesText() {
    currentMinute = Integer.toString(Clock.currentMinutes());
    this.minutesLabel.setText(currentMinute);
  }
  public void updateSecondsText() {
    currentSecond = Integer.toString(Clock.currentSeconds());
    this.secondsLabel.setText(currentSecond);
  }
  public void updateColor() {
    Color rgb = Clock.randomRGB();
    this.hoursLabel.setForeground(rgb);
    this.minutesLabel.setForeground(rgb);
    this.secondsLabel.setForeground(rgb);
  }

}
