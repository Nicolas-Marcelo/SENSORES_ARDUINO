// Primeiro coloca uma letra em cada porta logica
int botton = 12;
bool estado = 0;
int a = 7;
int b = 6;
int c = 5;
int d = 11;
int e = 10;
int f = 8;
int g = 9;
int h = 4;

// Agora cria funções para cada numero que vai aparecer

void numero_um (void){
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
}

void numero_dois (void) {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
}

void numero_tres (void) {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
}

void numero_quatro (void) {
    digitalWrite(f,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
}

void numero_cinco (void) {
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
}

void  numero_seis (void) { 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
} 

void numero_sete (void) {   
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
}  

void numero_oito (void) { 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
    digitalWrite(f,HIGH);  
} 

void numero_nove (void) { 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(f,HIGH);  
} 

void numero_zero(void) { 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
    digitalWrite(f,HIGH);  
}

void limpar (void) { 
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(g,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);  
    digitalWrite(e,LOW);  
    digitalWrite(f,LOW);  
} 

void setup() {

      pinMode(botton, INPUT_PULLUP);
      
      int i;
      for(i=4;i<=11;i++) ;
        pinMode(i,OUTPUT);

}

void loop() {

  if(!digitalRead(botton)){                                  // Verifica se o botão 1 foi pressionado
        cont++;                                              // Caso tenha incrementa +1 a cont
        
    }

  bool condicao = true;
  while (condicao){
    limpar();
    numero_zero();
    delay(2000);
    limpar();
    
    numero_um();
    delay(2000);
    limpar();
    
    numero_dois();
    delay(2000);
    limpar();
    
    numero_tres();
    delay(2000);
    limpar();
    
    numero_quatro();
    delay(2000);
    limpar();
    
    numero_cinco();
    delay(2000);
    limpar();
    
    numero_seis();
    delay(2000);
    limpar();
    
    numero_sete();
    delay(2000);
    limpar();

    numero_oito();
    delay(2000);
    limpar();

    numero_nove();
    delay(2000);
    limpar();
}}
