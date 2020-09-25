# CORSO DI ARDUINO PER MUSICISTI

[Arduino Project Hub](https://create.arduino.cc/projecthub)

Arduino account: [velitch](https://id.arduino.cc/Velitch)

## Indice

1. Elettronica
2. Arduino
3. Breadbord
4. Iniziamo!

## Elettronica

*Vcc*: con il termine Vcc si intende l’alimentazione positiva collegata di norma tramite il filo rosso.

*Gnd o massa*: con i termini Gnd o massa si intende l’alimentazione a 0 volt (cioè di riferimento rispetto a vcc ) e si collega di norma tramite filo nero.

*Segnale digitale*: segnale elettrico che può transitare solo tra 2 valori 0 e 1.

*Segnale analogico*: segnale elettrico che può transitare tra infiniti valori tra vcc e Gnd.

*Led*: un led ovvero Light Emitting Diode è un componente che se correttamente alimentato emette luce.

*Resistenza*: La resistenza elettrica è una grandezza fisica che misura la tendenza di un conduttore ad opporsi al passaggio di una corrente elettrica quando è sottoposto a una tensione. Esistono numerosi valori di resistenze, gli ohm (resistenza) di un resistore sono scritti sul medesimo tramite un codice a colori. Ma a cosa serve la resistenza? La resistenza serve a regolare la corrente che scorre nel circuito elettrico.


## Arduino

Arduino può essere alimentato inserendo un cavo USB nell’apposito connettore. Lo stesso cavo viene utilizzato per collegare la scheda al computer e permetter la programmazione della scheda stessa. Una volta uplodato il codice che andremo a programmare, Arduino lo memorizzerà nell’apposito microchip finchè non sarà sostituito con un nuovo codice. Questo vuol dire che Arduino è in grado di lavorare anche se separato da un computer. In questo caso dobbiamo alimentarlo con delle batterie (da 9 V oppure batterie stilo), pannelli solari, alimentatori 9V-12V, ecc. 

### Pin Power

<img src="http://www.marcopucci.it/wp-content/uploads/2013/07/tutorial_3_arduino_b.jpg">

I pin posizionati in basso a sinistra sono chiamati POWER perchè permettono di alimentare un circuito esterno tramite Arduino. Inserendo un cavetto elettrico nel pin 5V e collagando questo alla breadboard, avremo un segnale di 5V per accendere i nostri componenti elettronici come sensori, led, motorini, etc… I due pin GND servono per chiudere il circuito che stiamo realizzando. Inserendo un cavetto nel pin GND e collegando l’altra estremità alla breadboard siamo pronti per realizzare i nostri circuiti). Per maggiori informazioni clicca qui per vedere il tutorial precedente.

### Analog IN

<img src="http://www.marcopucci.it/wp-content/uploads/2013/07/tutorial_3_arduino_c.jpg">

I pin analogici sono posizionati in basso a destra e sono composti da 6 ingressi: A0 – A5.
I pin analogici sono solamente di ingresso dati (INPUT) e vengono utilizzati per leggere i dati provenienti da sensori. In questo modo Arduino è in grado di “leggere” quello che succede nel mondo reale e trasformarlo, grazie ai sensori, in numeri che poi andremo ad analizzare.
La particolarità del dato analogico è che può comprendere una serie infinita di numeri, ad esempio un sensore di prossimità rilascia un numero che va da 0 a 900 a seconda di quanto un oggetto è vicino o lontano. Più avanti, utilizzando dei sensori analogici, spiegherò meglio questo concetto di flusso infinito di numeri.

### Digital

<img src="http://www.marcopucci.it/wp-content/uploads/2013/07/tutorial_3_arduino_d-300x59.jpg">

I pin digitali sono 14 (0 – 13) e sono posti nella parte in alto della scheda.
Questi pin al contrario di quelli analogici restituiscono un valore che è uguale
a 1 o a 0. I pin digitali possono essere sia di lettura (INPUT) che di scrittura (OUTPUT). Questo vuol dire che se inseriamo un sensore digitale in un determinato pin possiamo vedere se questo è attivo o spento, oppure in uscita possiamo fare accendere una luce o spegnerla.
N.B: alcuni pin digitali, il 3, 5, 6, 9 ,10 e 11 sono chiamati pin PWM. I pin PWM possono essere sia digitali che analogici e possono essere sia di input che di output. Per il momento non consideriamo questi pin, verranno approfonditi più avanti.

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
   
   
### Web Editor



```json
{
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
}
```
