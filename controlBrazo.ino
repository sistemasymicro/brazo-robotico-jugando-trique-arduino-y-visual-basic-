#include <Servo.h>
int i,j;

Servo base;
Servo hombro;
Servo codo;
Servo pinza;

int angulo=0;
char dato;

int anguloBase;
int anguloHombro;
int anguloCodo;
int anguloPinza;
int anguloAgarrePinza;


  void setup() 
  {
    Serial.begin(9600);
    
     
    base.attach(5);
    hombro.attach(6);
    codo.attach(9);
    pinza.attach(10);

    anguloBase=90;
    anguloHombro=90;
    anguloCodo=90;
    anguloPinza=70;
    anguloAgarrePinza=130;
    
    
    base.write(90);
    delay(300);
    hombro.write(90);
    delay(300);
    codo.write(90);
    delay(300);
    pinza.write(70);
    delay(300);
    
    
  }
void girarBaseDerecha()
{
  anguloBase=anguloBase+2;
  base.write(anguloBase);
}

void girarBaseIzquierda()
{
  anguloBase = anguloBase-2;
  base.write(anguloBase);
}

void subirHombro()
{
  anguloHombro=anguloHombro-2;
  hombro.write(anguloHombro);
  Serial.println(anguloHombro);  
}
void bajarHombro()
{
  anguloHombro=anguloHombro+2;
  hombro.write(anguloHombro);
  Serial.println(anguloHombro);  
}

void levantarCodo()
{
  anguloCodo=anguloCodo+2;
  codo.write(anguloCodo);
}

void bajarCodo()
{
  anguloCodo=anguloCodo-2;
  codo.write(anguloCodo);
}

void abrirPinza()
{
  anguloPinza=anguloPinza-5;
  pinza.write(anguloPinza);
}

void cerrarPinza()
{
  anguloPinza=anguloPinza+5;
  pinza.write(anguloPinza);
}

void posicionInicial()
{
  for(i=90;i<=180;i++)
  {
    base.write(i);
  }  
  delay(300);
  hombro.write(90);
  delay(300);
  codo.write(90);
  delay(300);
  pinza.write(70);
}

void recogerFicha()
{
  for(i=90;i<=174;i++)
  {
    hombro.write(i);
    delay(20);
  }  
  delay(200);
  
  for(i=90;i<=114;i++)
  {
    codo.write(i);
        delay(20);
  }  
  delay(200);
  
  for(i=70;i<=anguloAgarrePinza;i++)
  {
    pinza.write(i);
    delay(20);
  }
  delay(200);
  
  for(i=176;i>=140;i--)
  {
    hombro.write(i);
        delay(20);
  }    
}
//************************************************************************++
void primeraPosicion()
{
   for(i=180;i>=92;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=140;i<=170;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=114;i<=124;i++)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=170;i<=176;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=124;i<=130;i++)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=105;i>=70;i--)
  {
    pinza.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=176;i>=140;i--);
  {
    hombro.write(i);
    delay(20);
  }
  
  posicionInicial();
  
}


void segundaPosicion()
{
  //Muevo la base
  for(i=180;i>=88;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);

  //Muevo el codo hasta 90
  for(i=114;i>=90;i--)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);


  //Muevo el hombro  hasta 160
  for(i=140;i<=170;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);

//Muevo el codo  
  for(i=90;i<=102;i++)
  {
    codo.write(i);
    delay(20);
  }  
  
  delay(200);
    
  //Abro la pinza
  for(i=110;i>=90;i--)
  {
    pinza.write(i);
    delay(20);
  }

  delay(200);

  //Subo el hombro  
  for(i=170;i>=140;i--)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  posicionInicial();
  
}

void terceraPosicion()
{
  //Muevo la base hasta los 90 grados
  for(i=180;i>=90;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);
  
   //Muevo el codo hasta los 70 grados
  for(i=114;i>=70;i--)
  {
    codo.write(i);
    delay(20);
  }
  
  //Muevo el hombro hasta 170 grados
  for(i=140;i<=170;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
   //Muevo el codo hasta los 80 grados
  for(i=70;i<=80;i++)
  {
    codo.write(i);
    delay(20);
  }
   
  delay(200);
  
  //Abro la pinza  
  for(i=105;i>=70;i--)
  {
    pinza.write(i);
    delay(20);
  }
  
  delay(200);
    
  for(i=170;i>=140;i--);
  {
    hombro.write(i);
    delay(20);
  }
  
  posicionInicial();
  
}


void cuartaPosicion()
{
  //Muevo la base
  for(i=180;i>=104;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);

  //Muevo el hombro  
  for(i=140;i<=172;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el codo  
  for(i=114;i<=122;i++)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
    
 //Muevo el hombro  
  for(i=172;i<=176;i++)
  {
    hombro.write(i);
    delay(20);
  } 
  
  delay(200);

//Muevo el codo  
  for(i=122;i<=132;i++)
  {
    codo.write(i);
    delay(20);
  }  
  
  delay(200);
    
  //Abro la pinza
  for(i=110;i>=90;i--)
  {
    pinza.write(i);
    delay(20);
  }

  delay(200);

  //Subo el hombro  
  for(i=170;i>=140;i--)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  posicionInicial();
  
}

void quintaPosicion()
{
  //Muevo la base 
  for(i=180;i>=106;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el codo
  for(i=114;i>=104;i--)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el hombro
  for(i=140;i<=170;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
   
  for(i=105;i>=70;i--)
  {
    pinza.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=170;i>=140;i--);
  {
    hombro.write(i);
    delay(20);
  }
  
  posicionInicial();
  
}

void sextaPosicion()
{
  //Muevo la base 
  for(i=180;i>=108;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el codo
  for(i=114;i>=74;i--)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el hombro
  for(i=140;i<=160;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
   
  for(i=105;i>=70;i--)
  {
    pinza.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=160;i>=140;i--);
  {
    hombro.write(i);
    delay(20);
  }
  
  posicionInicial();
  
}


void septimaPosicion()
{
  //Muevo la base
  for(i=180;i>=116;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);

  //Muevo el hombro  
  for(i=140;i<=164;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el codo  
  for(i=114;i<=120;i++)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
    
 //Muevo el hombro  
  for(i=164;i<=172;i++)
  {
    hombro.write(i);
    delay(20);
  } 
  
  delay(200);

//Muevo el codo  
  for(i=120;i<=138;i++)
  {
    codo.write(i);
    delay(20);
  }  
  
  delay(200);
    
  //Abro la pinza
  for(i=110;i>=90;i--)
  {
    pinza.write(i);
    delay(20);
  }

  delay(200);

  //Subo el hombro  
  for(i=172;i>=140;i--)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  posicionInicial();
  
}

void octavaPosicion()
{
  //Muevo la base hasta los 120 grados
  for(i=180;i>=120;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el hombro hasta los 170 grados
  for(i=140;i<=170;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el codo hasta los 94 grados
  for(i=114;i>=112;i--)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Abro la pinza  
  for(i=anguloAgarrePinza;i>=70;i--)
  {
    pinza.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=170;i>=140;i--);
  {
    hombro.write(i);
    delay(20);
  }
  
  posicionInicial();
  
}

void novenaPosicion()
{
  //Muevo la base hasta 132 grados
  for(i=180;i>=132;i--)
  {
    base.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el codo hasta los 94 grados
  for(i=114;i>=94;i--)
  {
    codo.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Muevo el hombro hasta los 170 grados
  for(i=140;i<=170;i++)
  {
    hombro.write(i);
    delay(20);
  }
  
  delay(200);
  
  //Abro la pinza  
  for(i=anguloAgarrePinza;i>=70;i--)
  {
    pinza.write(i);
    delay(20);
  }
  
  delay(200);
  
  for(i=170;i>=140;i--);
  {
    hombro.write(i);
    delay(20);
  }
  
  posicionInicial();
  
}

void happy()
{
  //Muevo el codo hacia arriba
  for(i=90;i<=180;i++);
  {
    codo.write(i);
  }
  
  delay(200);
  
  for(j=0;j<=10;j++)
  {
    
        for(i=180;i>=120;i--);
        {
          base.write(i);
        }
        
        delay(100);
        
        for(i=120;i<=180;i++);
        {
          base.write(i);
        }
        
        delay(100);
        
        for(i=180;i>=120;i--);
        {
          base.write(i);
        }
        
        delay(100);
        
        for(i=120;i<=180;i++);
        {
          base.write(i);
        }
        
        delay(100);
  }
  
  //Muevo la pinza
  for(j=0;j<=10;j++)
  
  {
  
      for(i=70;i<=140;i++);
      {
        pinza.write(i);
      }
      
      delay(200);
      
      for(i=140;i<=120;i--);
      {
        pinza.write(i);
      }
      
      delay(200);
      
      for(i=100;i<=120;i++);
      {
        pinza.write(i);
      }
      
      delay(200);
      
      for(i=140;i<=100;i--);
      {
        pinza.write(i);
      }
      
  }
  
  
}

  void loop() 
  {
    
    
    if(Serial.available()>0)
      {
        char dato= Serial.read();
          
          if(dato=='B')
            {
              girarBaseDerecha();
            }
            
          if(dato=='b')
            {
              girarBaseIzquierda();
            }
          
          if(dato=='H')
            {
              subirHombro();
            }
            
           if(dato=='h')
            {
             bajarHombro(); 
            }
            
           if(dato=='C')
             {
               levantarCodo();
             }
            
           if(dato=='c')
             {
               bajarCodo();
             }
  
          if(dato=='P')
             {
               abrirPinza();
             }
            
           if(dato=='p')
             {
               cerrarPinza();
             }
             
           if(dato=='i')
             {
               posicionInicial();
             }
             
            if(dato=='r')
             {
               recogerFicha();
             }
             
            if(dato=='1')
             {
               primeraPosicion();
             }
             
              if(dato=='2')
             {
               segundaPosicion();
             }
             
              if(dato=='3')
             {
               terceraPosicion();
             }
                          
             if(dato=='4')
             {
               cuartaPosicion();
             }
             
              if(dato=='5')
             {
              quintaPosicion();
             }
             
              if(dato=='6')
             {
              sextaPosicion();
             }
             
             if(dato=='7')
             {
               septimaPosicion();
             }

             if(dato=='8')
             {
               octavaPosicion();
             }
             
              if(dato=='9')
             {
               novenaPosicion();
             }
             
             if(dato=='w')
             {
               happy();
             }
        
        
      }
  }
