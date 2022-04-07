
const int Red_Pin=8;
const int Yellow_Pin=7;
const int Green_Pin=9;
const int Push_Button=4;

String mensaje_entrada;
String mensaje_salida;





void setup() {

Serial.begin(9600);

pinMode(Red_Pin,OUTPUT);
pinMode(Yellow_Pin,OUTPUT);
 pinMode(Green_Pin,OUTPUT);

}

void loop() {

if(Serial.Available()>0)
{
 mensaje_entrada=Serial.readStringUntil('\n');
if(mensaje_entrada.compareTo("GET_PIN")==0)
{

int val_pin=turn_pin_on(Red_Pin,Yellow_Pin,Green_Pin);



}
else {

mensaje_salida="COMANDO DESCONOCIDO";
Serial.println(mensaje_salida);
  
}

}

int turn_pin_on(int r,int y,int g)
{
  int res;

    res=r+y+g;


    return res;
  


  
}



  

}
