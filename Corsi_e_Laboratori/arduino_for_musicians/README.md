# CORSO DI ARDUINO PER MUSICISTI

[Arduino Project Hub](https://create.arduino.cc/projecthub)

Arduino account: [velitch](https://id.arduino.cc/Velitch)

## Indice

1. Elettronica
2. Arduino
3. Breadbord
4. Iniziamo!

## Elettronica

**Vcc**: con il termine Vcc si intende l’alimentazione positiva collegata di norma tramite il filo rosso.

**Gnd o massa**: con i termini Gnd o massa si intende l’alimentazione a 0 volt (cioè di riferimento rispetto a vcc ) e si collega di norma tramite filo nero.

**Segnale digitale**: segnale elettrico che può transitare solo tra 2 valori 0 e 1.

**Segnale analogico**: segnale elettrico che può transitare tra infiniti valori tra vcc e Gnd.

**Led**: un led ovvero Light Emitting Diode è un componente che se correttamente alimentato emette luce.

**Resistenza**: La resistenza elettrica è una grandezza fisica che misura la tendenza di un conduttore ad opporsi al passaggio di una corrente elettrica quando è sottoposto a una tensione. Esistono numerosi valori di resistenze, gli ohm (resistenza) di un resistore sono scritti sul medesimo tramite un codice a colori. Ma a cosa serve la resistenza? La resistenza serve a regolare la corrente che scorre nel circuito elettrico.


## Arduino

Arduino può essere alimentato inserendo un cavo USB nell’apposito connettore. Lo stesso cavo viene utilizzato per collegare la scheda al computer e permetter la programmazione della scheda stessa. Una volta uplodato il codice che andremo a programmare, Arduino lo memorizzerà nell’apposito microchip finchè non sarà sostituito con un nuovo codice. Questo vuol dire che Arduino è in grado di lavorare anche se separato da un computer. In questo caso dobbiamo alimentarlo con delle batterie (da 9 V oppure batterie stilo), pannelli solari, alimentatori 9V-12V, ecc. 

### Pin Power

<img src="http://www.marcopucci.it/wp-content/uploads/2013/07/tutorial_3_arduino_b.jpg">

I pin posizionati in basso a sinistra sono chiamati POWER perchè permettono di alimentare un circuito esterno tramite Arduino. Inserendo un cavetto elettrico nel pin 5V e collagando questo alla breadboard, avremo un segnale di 5V per accendere i nostri componenti elettronici come sensori, led, motorini, etc… I due pin GND servono per chiudere il circuito che stiamo realizzando. Inserendo un cavetto nel pin GND e collegando l’altra estremità alla breadboard siamo pronti per realizzare i nostri circuiti). Per maggiori informazioni clicca qui per vedere il tutorial precedente.

### Analog IN

<img src="http://www.marcopucci.it/wp-content/uploads/2013/07/tutorial_3_arduino_c.jpg">

I pin analogici sono posizionati in basso a destra e sono composti da 6 ingressi: A0 – A5. I pin analogici sono solamente di ingresso dati (INPUT) e vengono utilizzati per leggere i dati provenienti da sensori. In questo modo Arduino è in grado di “leggere” quello che succede nel mondo reale e trasformarlo, grazie ai sensori, in numeri che poi andremo ad analizzare. La particolarità del dato analogico è che può comprendere una serie infinita di numeri, ad esempio un sensore di prossimità rilascia un numero che va da 0 a 900 a seconda di quanto un oggetto è vicino o lontano. Più avanti, utilizzando dei sensori analogici, spiegherò meglio questo concetto di flusso infinito di numeri.

### Digital

<img src="http://www.marcopucci.it/wp-content/uploads/2013/07/tutorial_3_arduino_d-300x59.jpg">

I pin digitali sono 14 (0 – 13) e sono posti nella parte in alto della scheda. Questi pin al contrario di quelli analogici restituiscono un valore che è uguale
a 1 o a 0. I pin digitali possono essere sia di lettura (INPUT) che di scrittura (OUTPUT). Questo vuol dire che se inseriamo un sensore digitale in un determinato pin possiamo vedere se questo è attivo o spento, oppure in uscita possiamo fare accendere una luce o spegnerla.

**N.B**: alcuni pin digitali, il 3, 5, 6, 9 ,10 e 11 sono chiamati pin PWM. I pin PWM possono essere sia digitali che analogici e possono essere sia di input che di output. Per il momento non consideriamo questi pin, verranno approfonditi più avanti.

## Breadbord

La breadboard è una basetta con dei fori dove è possibile inserire dei fili elettrici rigidi (in vendita in tutti i negozi di elettronica). In questo modo è possibile evitare saldature tra i vari componenti che formeranno il nostro circuito. Una volta che il nostro circuito è stato testato con Arduino possiamo saldare e costruire un vero circuito con le basette millefori o qualsiasi altro supporto.

<p align="center">
  <img height="300" src="https://solarbotics.com/wp-content/uploads/21020-dscn0140-2.jpg">
</p>

I pin laterali (rossi e blu) sono collegati insieme per tutta la linea orizzontale. Questo vuol dire che inserendo un cavo con 5V (5 Volt) in qualsiasi punto della linea rossa avremo 5v in tutti gli altri punti della riga rossa. Questo serve per poter alimentare più componenti simultaneamente. Stessa cosa con la linea blu. Qui dobbiamo collegare il segnale di Arduino GND (con filo nero), in questo modo su tutta la linea blu abbiamo un segnale di massa. A cosa servono 5v e GND? Per semplificare possiamo dire che il segnale 5V invia una corrente nel circuito (che serve per alimentare i vari componenti) e il flusso di corrente termina nel pin GND. In questo modo abbiamo chiuso il circuito e la corrente è in grado di passare attraverso i vari componenti.

All’interno della breadboard invece i collegamenti sono costituiti da 5 pin verticali. Se inseriamo un segnale di 5V in uno qualsiasi dei 5 pin nei 4 rimanenti avremo un segnale di 5V. In mezzo alla breadboard c’è una linea di separazione. Le due metà della basetta non sono collegate, per far passare la corrente da una metà all’altra dobbiamo realizzare dei ponti. 


## Iniziamo!

1. Crea un account gratuito sul sito ufficiale di [Arduino](https://login.arduino.cc/login)
2. Scarica il software [Arduino IDE](https://www.arduino.cc/en/Main/Software)
   - oppure usa il [web editor](https://create.arduino.cc/editor)
   
   
### Arduino IDE

### Dichiarazione delle variabili e dei pin utilizzati

```
int ledpin = 13; // esempio dichiarazione pin
int ledpin_1 = 4;
int ledpin_2 = 7;
int ledpin_3 = 12;
char tastiera=0; // carattere tastiera

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
```
### // esempio dichiarazione pin

``ledpin`` è il nome che stiamo dando al pin di Arduino. 13 è in numero del pin utilizzato. ``Int`` vuol dire che stiamo utlizzando un numero intero (senza virgole).
Da ora in poi per gestire le azioni sul Pin13 di Arduino utilizzeremo il nome ledpin.

``ledpin_1``, ``ledpin_2`` e ``ledpin_3`` sono tre nomi qualsiasi che associamo rispettivamente ai pin digitali 4, 7 e 12 di Arduino.

N.B: il nome ``ledpin`` è un nome inventato. Possiamo utilizzare qualsiasi nome ad esempio, ``ledcomandato``, ``ledarduino``, la cosa importante è il numero che gli assegniamo che deve corrispondere al pin utilizzato nel circuito.

### // ``char``

La parola ``char`` identifica una variabile che contiene un carattere. ``tastiera`` è il nome che diamo a questa variabile ma può essere chiamata in qualsiasi altro modo

### ``Void Setup()``

Con void setup dichiariamo se i pin che stiamo utilizzando su Arduino sono di Input o di Output (se dobbiamo leggere i dati provenienti da un sensore il pin deve essere di Input, se dobbiamo inviare segnali elettrici al di fuori della scheda allora il pin deve essere di Output). Tutto quello che scriviamo tra le due parentesi graffe fa parte della funzione setup. 

```
void setup() {

  pinMode(ledpin,OUTPUT);

}
```

### ``Void Loop()``

A differenza della funzione ``setup()``, la funzione ``loop()`` permette di ripetere all’infinito i comandi che scriveremo al suo interno. Questo vuol dire che le operazioni verranno ripetute in modo continuo (partendo dall’alto verso il basso) fino allo spegnimento della scheda.

I principali comandi sono fondamentalmente due: digitalWite e analogRead. Con ``analogRead`` possiamo “leggere i valori analogici” provenienti da un sensore. Con ``digitalWrite`` possiamo scrivere e inviare un segnale, su un pin di Arduino. I segnali digitali possono essere solamente 0 e 1. Inviando uno “0” il nostro led si spegnerà, inviando “1” si accenderà. Il segnale digitale 0 viene interpretato da Arduino come 0V mentre il segnale digitale 1 diventa nel mondo reale 5V e quindi è in grado di accendere un Led.

```
void loop()
{
digitalWrite(ledpin, 1);
delay(1000);
digitalWrite(ledpin, 0);
delay(1000);
}
```
La funzione ``loop()`` è la terza e ultima parte della programmazione di Arduino. Questa funzione viene letta dall’alto verso il basso e tutte le operazioni in essa presenti vengono ripetute all’infinito. In questo caso il primo comando che incontra è: ``digitalWrite(ledpin, 1);`` – il Led posizionato nel Pin13 riceverà un segnale “alto” ovvero di 5V che farà accendere il Led.

Subito dopo riceverà un ``delay(1000);`` – che rappresenta una pausa di 1 secondo. Il Led rimane acceso per un secondo.
Con ``digitalWrite(ledpin, LOW);`` e ``delay(1000);`` – il Led riceverà un segnale di 0V e quindi si spegnerà per un secondo. Subito dopo Arduino ricomincerà a leggerà i comandi dall’alto, dalla funzione ``loop()``, e quindi accenderà il Led e lo spegnerà all’infinito.

### Upload Sketch su Arduino

- Per testare se lo sketch è stato scritto correttamente clicchiamo sull’icona in alto a forma di “V”. Se tutto è andato bene, sotto apparirà la scritta *Done Compling*.
 
- Salva lo sketch
 
- Collega Arduino con il cavetto USB al computer

  - Click su Tools e poi su Board, seleziona la scheda utilizzata

  - Sempre su Tools seleziona Serial Port e clicca sulla porta USB è collegato Arduino

*(Queste due operazioni, se utilizziamo sempre la stessa scheda e la colleghiamo alla stessa porta USB, non devono essere effettuarle in futuro).

- Per fare l'upload clicca sull’icona con la freccia verso destra. Se tutto è andato bene apparirà in basso la scritta *Done Uploding*.

In caso di errore il programma ci segnala la riga dove è possibile che sia stato scritto un comando sbagliato. Fate molta attenzione alla sintassi di programmazione, ovvero punteggiatura, lettere minuscole o maiuscole, parentesi graffe, etc…


 
