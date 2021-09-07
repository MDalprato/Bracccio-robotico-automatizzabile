# BRACCCIO ROBOTICO AUTOMATIZZABILE ATTRAVERSO L'USO DEL COMPUTER
ITIS Faenza - Sezione di Elettronica e Telecomunicazioni

Lo sviluppo industriale e la nascita di nuove tecnologie ha permesso la creazione di prodotti sempre più complessi e complicati dal punto di vista Tecnico-Scientifico .
Le moderne industrie fanno ampio uso di sistemi automatizzati e di controlli informatici per il monitoraggio della catena di produzione industriale.
Sempre più industrie si sono mano a mano evolute dal punto di vista dell'automazione, basti pensare alle moderne industrie che lavorano in ambito automobilistico.
Rientra in questo campo , l'utilizzo di bracci robotici atti alla semplificazioni  di operazioni ripetitive e a volte pericolose e complesse.
L'utilizzo di questi macchinari ha permesso la velocizzazione della produzione e del collaudo di tutti quei prodotti che prima venivano lavorati singolarmente dalla mano umana.
Il Braccio robotico trattato in questo progetto , ovviamente , è di dimensioni e di prestazioni nettamente inferiori a quelli utilizzati in ambito industriale ma rappresenta tuttavia una federe simulazione di ciò che avviene nella pratica.
Il progetto consta di tre schede elettroniche lavoranti in simbiosi e di un braccio robotico di dimensioni ridotte.
Il progetto è costituito da varie fasi di analisi , gestione e controllo che sfruttano la capacita del computer di lavorare simultaneamente su più processi.
I dati vengono inviati dal Computer attraverso la trasmissione seriale all'interfaccia USB , che offre 8 canali di input digitali e 8 canali di output digitali.
L'interfaccia è a sua volta connessa ad una scheda di controllo e gestione dei servomotori posti nei vari giunti del braccio robotico.
I dati sfruttano la logica di tipo TTL ( +5 V ) poiché il microcontrollore presente sull'interfaccia USB e i driver per la gestione dei servomotori sono ti tipo TTL.
Attraverso vari attuatori posti sul braccio , si rilevano gli stati e le posizioni di riposo dei servomotori che vengono rilevati e inviati istantaneamente al software di controllo.
Il sistema è pienamente controllabile attraverso il Computer e i tutti i programmi presenti nel braccio sono stati creati utilizzando il linguaggio di programmazione C++.
Il braccio è comunque programmabile utilizzando anche altri linguaggi di programmazione ma si è ritenuto il C++ come il miglior compromesso in termini di prestazioni , affidabilità e comprensione .
Attraverso il C++ si è quindi creato il software per la gestione manuale e automatizzata del braccio .
Tale software rappresenta il miglior sistema per poter gestire in maniera ottimale , sicura e efficiente il braccio robotico.
Le linee di ingresso sono state utilizzare per controllare lo stato del braccio e per permetterne una più accurata gestione senza incorrere in problemi di natura tecnica quali per esempio , la torsione eccessiva di uno dei vari servomotori presenti.

	Il presente lavoro è cosi organizzato :

- Il capitolo 2 analizza il progetto in modo specifico , studiando in maniera analitica e specifica il circuito elettronico di ogni scheda elettronica .

- Il capitolo 3 analizza il progetto dal punto di vista software , focalizzandosi sul linguaggio di programmazione C++ e il modo con cui il progetto interagisce con il computer .

- Il capitolo 4 analizza la realizzazione pratica del progetto , indicando in ogni sua minima parte le tecniche e i modi con cui è stato realizzato il braccio robotico e le relative schede elettroniche .


Sono presenti alcune appendici con le istruzioni per l'utilizzo dei software di gestione del braccio , sia per la versione automatica sia per la versione manuale.
Infine la tesi allega un CD-ROM contenente i sue software sopra citati , il presente testo in versione digitale e il listato dei codici in C++.