#include<iostream>
#include<graphics>
#include<conio>
#include<dos>

void draw_piano()
{
 setbkcolor(WHITE);
 setcolor(8);
 line(32,40,608,40);
 line(32,40,32,240);
 line(32,240,608,240);
 line(608,40,608,240);
 setfillstyle(1,8);
 bar(54,40,74,160);   line(64,160,64,240);
 bar(86,40,106,160);  line(96,160,96,240);     line(128,40,128,240);
 bar(150,40,170,160); line(160,160,160,240);
 bar(182,40,202,160); line(192,160,192,240);
 bar(214,40,234,160); line(224,160,224,240);   line(256,40,256,240);
 bar(278,40,298,160); line(288,160,288,240);
 bar(310,40,330,160); line(320,160,320,240);   line(352,40,352,240);
 bar(374,40,394,160); line(384,160,384,240);
 bar(406,40,426,160); line(416,160,416,240);
 bar(438,40,458,160); line(448,160,448,240);   line(480,40,480,240);
 bar(502,40,522,160); line(512,160,512,240);
 bar(534,40,554,160); line(544,160,544,240);   line(576,40,576,240);
}

void button_name()
{
 setcolor(8);
 settextstyle(10,0,1);
 outtextxy(42 ,180,"C");    outtextxy(74 ,180,"D");    outtextxy(106,180,"E");
 outtextxy(138,180,"F");    outtextxy(170,180,"G");    outtextxy(202,180,"A");
 outtextxy(234,180,"B");    outtextxy(266,180,"C");    outtextxy(298,180,"D");
 outtextxy(330,180,"E");    outtextxy(362,180,"F");    outtextxy(394,180,"G");
 outtextxy(426,180,"A");    outtextxy(458,180,"B");    outtextxy(490,180,"C");
 outtextxy(522,180,"D");    outtextxy(554,180,"E");    outtextxy(586,180,"F");
 setcolor(WHITE);
 settextstyle(11,0,1);
 outtextxy(58 ,100,"C#");   outtextxy(90 ,100,"D#");   outtextxy(154,100,"F#");
 outtextxy(186,100,"G#");   outtextxy(218,100,"A#");   outtextxy(282,100,"C#");
 outtextxy(314,100,"D#");   outtextxy(378,100,"F#");   outtextxy(410,100,"G#");
 outtextxy(442,100,"A#");   outtextxy(506,100,"C#");   outtextxy(538,100,"D#");
}

/****************************************************************************
*****************************************************************************
*****************************************************************************
****************************************************************************/
////          (0)   (1)   (2)     (3)     (4)     (5)      (6)     (7)   ////
float c[8] = { 0, 32.70, 65.46, 130.81, 261.62, 523.25, 1046.50, 2093.00 },
     c_[8] = { 0, 34.64, 69.29, 138.59, 277.18, 554.36, 1108.73, 2217.46 },
      d[8] = { 0, 36.70, 73.41, 146.83, 293.66, 587.32, 1174.65, 2349.31 },
     d_[8] = { 0, 38.89, 77.78, 155.56, 311.12, 622.25, 1244.50, 2489.01 },
      e[8] = { 0, 41.20, 82.40, 164.81, 329.62, 659.25, 1318.51, 2637.02 },
      f[8] = { 0, 43.65, 87.30, 174.61, 349.22, 698.45, 1396.91, 2793.82 },
     f_[8] = { 0, 46.24, 92.49, 184.99, 369.99, 739.98, 1479.97, 2959.95 },
      g[8] = { 0, 48.99, 97.99, 195.99, 391.99, 783.99, 1567.98, 3135.96 },
     g_[8] = { 0, 51.91, 103.82,207.65, 415.30, 830.60, 1661.21, 3322.43 },
      a[8] = { 0, 55.00, 110.0, 220.00, 440.00, 880.00, 1760.00, 3520.00 },
     a_[8] = { 0, 58.27, 116.54,233.08, 466.16, 932.32, 1864.65, 3729.31 },
      b[8] = { 0, 61.73, 123.47,246.94, 493.88, 987.76, 1975.53, 3951.06 };
/****************************************************************************
*****************************************************************************
*****************************************************************************
****************************************************************************/



void main()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c://turboc3//bgi");
 draw_piano();
 button_name();
 char ch=0; int now=5;
 while(ch!=27)
 {
 ch=getch();
 switch(ch)
 {
  case 9 : sound(c[now]); delay(100); nosound();     break;//tab
  case '!':
  case '1': sound(c_[now]); delay(100); nosound();   break;
  case 'q':
  case 'Q': sound(d[now]); delay(100); nosound();    break;
  case '@':
  case '2': sound(d_[now]); delay(100); nosound();   break;
  case 'w':
  case 'W': sound(e[now]); delay(100); nosound();    break;
  case 'e':
  case 'E': sound(f[now]); delay(100); nosound();    break;
  case '$':
  case '4': sound(f_[now]); delay(100); nosound();   break;
  case 'r':
  case 'R': sound(g[now]); delay(100); nosound();    break;
  case '%':
  case '5': sound(g_[now]); delay(100); nosound();   break;
  case 't':
  case 'T': sound(a[now]); delay(100); nosound();    break;
  case '^':
  case '6': sound(a_[now]); delay(100); nosound();   break;
  case 'y':
  case 'Y': sound(b[now]); delay(100); nosound();    break;
  case 'u':
  case 'U': sound(c[now+1]); delay(100); nosound();  break;
  case '*':
  case '8': sound(c_[now+1]); delay(100); nosound(); break;
  case 'i':
  case 'I': sound(d[now+1]); delay(100); nosound();  break;
  case '(':
  case '9': sound(d_[now+1]); delay(100); nosound(); break;
  case 'o':
  case 'O': sound(e[now+1]); delay(100); nosound();  break;
  case 'p':
  case 'P': sound(f[now+1]); delay(100); nosound();  break;
  case '_':
  case '-': sound(f_[now+1]); delay(100); nosound(); break;
  case '{':
  case '[': sound(g[now+1]); delay(100); nosound();  break;
  case '+':
  case '=': sound(g_[now+1]); delay(100); nosound(); break;
  case '}':
  case ']': sound(a[now+1]); delay(100); nosound();  break;
  case 8  : sound(a_[now+1]); delay(100); nosound(); break;   //bk spc
  case '|':
  case '\\': sound(b[now+1]); delay(100); nosound(); break;
  case '<':
  case ',': if(now>1) now--; break;
  case '>':
  case '.': if(now<6) now++; break;
  default : delay(100); nosound();                   break;
  }
 }
//baahar
}
