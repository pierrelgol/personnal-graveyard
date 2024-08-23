package listening_02_07;

import java.awt.Color;
import java.util.Random;

public class Clock {

  public static int currentHour() {
    long totalMilliseconds = System.currentTimeMillis();
    long totalSeconds = totalMilliseconds / 1000;
    int currentHour = 1+ (int) (totalSeconds / 3600) % 24;
    return currentHour ;

  }

  public static int currentMinutes() {
    long totalMilliseconds = System.currentTimeMillis();
    final int currentMinutes = (int) (totalMilliseconds / 60000) % 60;
    return currentMinutes;

  }

  public static int currentSeconds() {
    long totalMilliseconds = System.currentTimeMillis();
    int currentSeconds = (int) (totalMilliseconds / 1000) % 60;
    return currentSeconds;

  }
  public static Color randomRGB() {

    Random random = new Random();
    int r = random.nextInt(30, 256);
    int g = random.nextInt(30, 256);
    int b = random.nextInt(30, 256);
   Color color = new Color(r, g, b);
    return color;

  }

 

}
