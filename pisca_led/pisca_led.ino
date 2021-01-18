/*
  Pisca LED by Medina M. R. B

  Este código exemplo foi inicialmente escrito, para teste da placa digispark, mas
  pode ser usado para testar ou treinar em qualquer placa, recomendo que alterne o
  número da porta para treinar. Neste exemplo estamos usando a saída digital 03.

  A função deste código é acender um LED por um segundo e depois apaga-lo por um segundo,
  repetidamente. Como experiência altere os valores de delay para observar como o LED
  se comporta.

  Este código de exemplo é de domínio público.

  https://github.com/marciomedina3d/arduino/blob/main/pisca_led/pisca_led.ino

  Componentes:

  1 - LED 5mm
  1 - Resistor 220 ohms
  1 - Protoboard
  3 - Fios

  ATENÇÃO!!
  Só conecte a placa ao computador após realizar toda a montagem dos componentes.
  Se estiver usando o digispark só conecte a placa após o IDE realizar a solicitação.
  
  Esquema de montagem disponivel em:
  
  https://www.tinkercad.com/things/bhuegjKptES 

  1º Passo
   Monte um LED na protoboar, ligue um fio no catodo (-) (terminal menor) do LED ao
   terra da placa identificado como (GND - Ground)

  2º Passo
   Ligue um resistor de 220 ohms no anodo (+) (terminal maior) do LED.

  3º Passo
   Ligue um fio no terminal 03 da placa no resistor.

   
  Instalação e configuração Digispark no Debian no GitHub:

  https://github.com/marciomedina3d/arduino/blob/main/note/02_digispark_debian.md

*/

const int LED = 3;
// Nome do LED e numero do pino digital.

void setup() {
// inicializa o pino digital 03 como uma saída.
  pinMode(LED, OUTPUT);
}

// a função de loop é executada repetidamente enquanto a placa se manter alimentada.
void loop() {
  digitalWrite(LED, HIGH);  // liga o LED (HIGH é o nível de tensão ALTO)
  delay(1000);                       // espere um segundo
  digitalWrite(LED, LOW);    // desliga o LED tornando a tensão BAIXO)
  delay(1000);                       // espere um segundo
}
