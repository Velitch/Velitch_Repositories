# CORSO DI ARDUINO PER MUSICISTI

[Arduino Project Hub](https://create.arduino.cc/projecthub)

Arduino account: [velitch](https://id.arduino.cc/Velitch)

## Iniziamo!

1. Crea un account gratuito sul sito ufficiale di [Arduino](https://login.arduino.cc/login)
2. Scarica il software [Arduino IDE](https://www.arduino.cc/en/Main/Software)
   - oppure usa il [web editor](https://create.arduino.cc/editor)

## Elettronica

*Vcc*: con il termine Vcc si intende l’alimentazione positiva collegata di norma tramite il filo rosso.

*Gnd o massa*: con i termini Gnd o massa si intende l’alimentazione a 0 volt (cioè di riferimento rispetto a vcc ) e si collega di norma tramite filo nero.

*Segnale digitale*: segnale elettrico che può transitare solo tra 2 valori 0 e 1.

*Segnale analogico*: segnale elettrico che può transitare tra infiniti valori tra vcc e Gnd.

*Led*: un led ovvero Light Emitting Diode è un componente che se correttamente alimentato emette luce.

*Resistenza*: La resistenza elettrica è una grandezza fisica che misura la tendenza di un conduttore ad opporsi al passaggio di una corrente elettrica quando è sottoposto a una tensione. Esistono numerosi valori di resistenze, gli ohm (resistenza) di un resistore sono scritti sul medesimo tramite un codice a colori. Ma a cosa serve la resistenza? La resistenza serve a regolare la corrente che scorre nel circuito elettrico.

## Breadbord

La breadboard è una basetta con dei fori dove è possibile inserire dei fili elettrici rigidi (in vendita in tutti i negozi di elettronica). In questo modo è possibile evitare saldature tra i vari componenti che formeranno il nostro circuito. Una volta che il nostro circuito è stato testato con Arduino possiamo saldare e costruire un vero circuito con le basette millefori o qualsiasi altro supporto.

<p align="center">
  <img height="300" src="https://solarbotics.com/wp-content/uploads/21020-dscn0140-2.jpg">
</p>

I pin laterali (rossi e blu) sono collegati insieme per tutta la linea orizzontale. Questo vuol dire che inserendo un cavo con 5V (5 Volt) in qualsiasi punto della linea rossa avremo 5v in tutti gli altri punti della riga rossa. Questo serve per poter alimentare più componenti simultaneamente. Stessa cosa con la linea blu. Qui dobbiamo collegare il segnale di Arduino GND (con filo nero), in questo modo su tutta la linea blu abbiamo un segnale di massa. A cosa servono 5v e GND? Per semplificare possiamo dire che il segnale 5V invia una corrente nel circuito (che serve per alimentare i vari componenti) e il flusso di corrente termina nel pin GND. In questo modo abbiamo chiuso il circuito e la corrente è in grado di passare attraverso i vari componenti.

All’interno della breadboard invece i collegamenti sono costituiti da 5 pin verticali. Se inseriamo un segnale di 5V in uno qualsiasi dei 5 pin nei 4 rimanenti avremo un segnale di 5V. In mezzo alla breadboard c’è una linea di separazione. Le due metà della basetta non sono collegate, per far passare la corrente da una metà all’altra dobbiamo realizzare dei ponti. 

## Arduino

Arduino può essere alimentato inserendo un cavo USB nell’apposito connettore. Lo stesso cavo viene utilizzato per collegare la scheda al computer e permetter la programmazione della scheda stessa. Una volta uplodato il codice che andremo a programmare, Arduino lo memorizzerà nell’apposito microchip finchè non sarà sostituito con un nuovo codice. Questo vuol dire che Arduino è in grado di lavorare anche se separato da un computer. In questo caso dobbiamo alimentarlo con delle batterie (da 9 V oppure batterie stilo), pannelli solari, alimentatori 9V-12V, ecc. 



