// proyecto con servomotores
# include <Servo.h>

    //definicion de los servomotores
    Servo Servo1;
    Servo Servo2;

    int eje1=90; //90grados
    int eje2=90;

    void setup(){
        Servo1.attach(7); //donde van los pines
        Servo2.attach(6);

        Servo1.write(90);
        Servo2.write(90);
    }

    void loop(){
        //servo 1
//direccion 1 
        if (analogRead (0) <200 && eje1 <180){
            eje1++;
            Servo1.write(eje1);
        }
        if(analogRead (0) <700 && eje1>0){
            eje1--;
            Servo1.write(eje1);
        }

        //servo 2
        //pin analogico 1

        if (analogRead (1) <200 && eje2 <180){
            eje2++;
            Servo1.write(eje2);
        }
        if(analogRead (1) <700 && eje2>0){
            eje2--;
            Servo2.write(eje2);
        }
        delay (15); // el bucle no corra tan rapido 
    }   
