package listening_02_07;

public class CaseStudy {

  public static void run() throws InterruptedException {

    Frame frame = new Frame();

    while (frame.isActive() == true) {
      frame.updateHourText();
      frame.updateMinutesText();
      frame.updateSecondsText();
      frame.repaint();
      frame.revalidate();
      //Thread.sleep(1000);

    }

  }

  public static void main(String[] args) throws InterruptedException {

    run();

  }

}
