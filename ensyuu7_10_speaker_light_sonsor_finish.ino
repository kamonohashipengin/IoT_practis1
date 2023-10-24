#define sensorPin 33 //INPUTA:33 INPUTB:32
#define red 27 
#define green 26
#define blue 25

int swFlag = 0;


//speaker
#define buzzerPin 13

#define BEAT 500
#define DO 261.6
#define _DO 277.18
#define RE 293.665
#define _RE 311.127
#define MI 329.63
#define FA 349.228
#define _FA 369.994
#define SO 391.995
#define _SO 415.305
#define RA 440
#define _RA 466.164
#define SI 493.883
#define octDO 523.251
#define octRE 587.330
#define octMI 659.255


void playmusic()
{
  

  ledcWriteTone(4,MI);
  delay(300);
  ledcWriteTone(4,octDO);
  delay(300);
  ledcWriteTone(4,0);
  delay(600);  
  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,SI);
  // delay(300);
  // ledcWriteTone(4,0);
  // delay(600);  
  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(600);
  // ledcWriteTone(4,SO);
  // delay(300);
  // ledcWriteTone(4,FA);
  // delay(300);
  // ledcWriteTone(4,SO);
  // delay(600);  
  // ledcWriteTone(4,0);
  // delay(300);
  
  // ledcWriteTone(4,DO);
  // delay(300);
  // ledcWriteTone(4,RE);
  // delay(300);
  // ledcWriteTone(4,FA);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,octDO);
  // delay(300);

  // ledcWriteTone(4,SI);
  // delay(300);
  // ledcWriteTone(4,SO);
  // delay(300);
  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,RE);
  // delay(300);
  // ledcWriteTone(4,MI);
  // delay(1200);
  // ledcWriteTone(4,0);
  // delay(900);

  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,octDO);
  // delay(300);
  // ledcWriteTone(4,0);
  // delay(600);  
  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,SI);
  // delay(300);
  // ledcWriteTone(4,0);
  // delay(600);  
  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(600);
  // ledcWriteTone(4,SO);
  // delay(300);
  // ledcWriteTone(4,FA);
  // delay(300);
  // ledcWriteTone(4,SO);
  // delay(600);  
  // ledcWriteTone(4,0);
  // delay(300);
  
  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,RE);
  // delay(300);
  // ledcWriteTone(4,FA);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,octDO);
  // delay(300);

  // ledcWriteTone(4,octRE);
  // delay(300);
  // ledcWriteTone(4,octMI);
  // delay(300);
  // ledcWriteTone(4,SI);
  // delay(300);
  // ledcWriteTone(4,SO);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(1200);
  // ledcWriteTone(4,0);
  // delay(900);
 
  // //Bパート
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,SI);
  // delay(300);  
  // ledcWriteTone(4,octDO);
  // delay(300);
  // ledcWriteTone(4,octDO);
  // delay(300);  
  // ledcWriteTone(4,octDO);
  // delay(300);
  // ledcWriteTone(4,octDO);
  // delay(300);  
  // ledcWriteTone(4,octDO);
  // delay(300);
  // ledcWriteTone(4,SI);
  // delay(300);  
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,SI);
  // delay(300);  
  // ledcWriteTone(4,SO);
  // delay(1200); 
  // ledcWriteTone(4,0);
  // delay(900);

  // ledcWriteTone(4,FA);
  // delay(200);
  // ledcWriteTone(4,SO);
  // delay(200);  
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(300);  
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(300);  
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,SO);
  // delay(300);  
  // ledcWriteTone(4,FA);
  // delay(300);
  // ledcWriteTone(4,SO);
  // delay(300);  
  // ledcWriteTone(4,MI);
  // delay(1200); 
  // ledcWriteTone(4,0);
  // delay(900);

  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,DO);
  // delay(300);  
  // ledcWriteTone(4,RE);
  // delay(300);
  // ledcWriteTone(4,FA);
  // delay(300);  
  // ledcWriteTone(4,RA);
  // delay(300);
  // ledcWriteTone(4,SO);
  // delay(900);  

  // ledcWriteTone(4,FA);
  // delay(300);
  // ledcWriteTone(4,RE);
  // delay(300);  
  // ledcWriteTone(4,MI);
  // delay(300);
  // ledcWriteTone(4,RA);
  // delay(300);  
  // ledcWriteTone(4,SI);
  // delay(300);
  // ledcWriteTone(4,octRE);
  // delay(300);  
  // ledcWriteTone(4,octDO);
  // delay(300);  
  // ledcWriteTone(4,SI);
  // delay(300);  
  // ledcWriteTone(4,octDO);
  // delay(300);  
  
  // //Cパート
  // ledcWriteTone(4,octMI);
  // delay(600);    
  // ledcWriteTone(4,0);
  // delay(300);  
  // ledcWriteTone(4,octRE);
  // delay(200);    
  // ledcWriteTone(4,octMI);
  // delay(200);    
  // ledcWriteTone(4,RA);
  // delay(600);  
  // ledcWriteTone(4,0);
  // delay(300);

  // ledcWriteTone(4,SO);
  // delay(200);    
  // ledcWriteTone(4,RA);
  // delay(200);    
  // ledcWriteTone(4,MI);
  // delay(600);  
  // ledcWriteTone(4,0);
  // delay(300);
  // ledcWriteTone(4,RE);
  // delay(200);    
  // ledcWriteTone(4,MI);
  // delay(200);    
  // ledcWriteTone(4,RA);
  // delay(600);  
  // ledcWriteTone(4,0);    
  // delay(600);  
  // ledcWriteTone(4,SI);
  // delay(900);  
  // ledcWriteTone(4,0);
  // delay(2000);
}



void setup() {
 //光センサー、モニタ
 Serial.begin(115200);//USBの黒いチップとPCの通信速度。シリアルモニタが必要な時にするセット
 pinMode(sensorPin, INPUT);//センサーなのでインプット

 //LED 使用するタイマーのチャネル,周波数,デューティ比を設定
 ledcSetup(0, 12800, 8);
 ledcSetup(1, 12800, 8);
 ledcSetup(2, 12800, 8);


  // 各色を各チャネルへ接続
 ledcAttachPin(red, 0);
 ledcAttachPin(green, 1);
 ledcAttachPin(blue, 2);

 //スピーカー
 ledcAttachPin(buzzerPin,4);
 ledcSetup(4, 1200, 8);

}

void loop() {  

  float cds_ad = analogRead(sensorPin);
  float cds_v = cds_ad * 3.3 / 4096;//分解能（2進数の限界）

  // 電圧値より、Lux計算
  float lux = 10000 * cds_v / (3.3 - cds_v) / 1000;

  Serial.print(lux);
  Serial.println(" Lux ");//

  if (lux > 20) {

    Serial.println("High lux");
    delay(1000);
    ledcWrite(0, 255);
    ledcWrite(1, 255);
    ledcWrite(2, 255);
   
    Serial.println("OFF");
    delay(1500);

   
      if(swFlag == 0){
        Serial.println("PLAY");
        delay(1000);
        playmusic();
        swFlag = !swFlag;

    } else {
      Serial.println("OFF");
      delay(1000);
      ledcWriteTone(4,0); //***1-4へ
      delay(1000);
  }
}


  else {
    Serial.println("Low lux");
    delay(1000);
   ledcWrite(0, 170);
   ledcWrite(1, 230);
   ledcWrite(2, 250);

     if(swFlag == 1){
        swFlag = !swFlag;

    } else {
        Serial.println("OFF");
        delay(1000);
        ledcWriteTone(4,0); //音が消える //***1-4へ
        delay(1000);
  }
  }
}