/**
* Copyright (C) 2021 Wiibooxtech Perron
*/

/**
* Multi-language character definition
* The corresponding language of the elements in the array is as follows:
*
* 0 - CN / Chinese
* 1 - EN / English
* 2 - KANA / Japanese
* 3 - ES / Spanish
* 4 - FR / French
* 5 - DE / German
* 6 - IT / Italy
* 7 - NL / Dutch
*/

#ifndef LANGUAGE_MULTI_H
#define LANGUAGE_MULTI_H

const char MSG_WIFINOTCONNECTED	[] PROGMEM = {"connecting..."};
const char MSG_UNKNOWN [] PROGMEM = {"UNKNOWN"};
const char MSG_NONE [] PROGMEM = {"NONE"};

const char MMSG_EMPTY[] PROGMEM = { " " };
const char MMSG_UNKNOWN_TIME[] PROGMEM = { "??h??m" };

const char MMSG_SPEED_VALUE1[8] PROGMEM = { "  25%" };
const char MMSG_SPEED_VALUE2[8] PROGMEM = { "  50%" };
const char MMSG_SPEED_VALUE3[8] PROGMEM = { "  100%" };
const char MMSG_SPEED_VALUE4[8] PROGMEM = { "  200%" };
const char MMSG_SPEED_VALUE5[8] PROGMEM = { "  400%" };
const char MMSG_SPEED_VALUE6[8] PROGMEM = { "  600%" };
const char TEMP_STRING[] PROGMEM = { "%d��" };

const char MMSG_ERR_HOMING_FAILED[8][53] PROGMEM = {
	"��ԭ��ʧ��",			// ��ԭ��ʧ��
	"Homing failed",
	"�۩`�ߥ�ʧ��",
	"Homing fallo",
    "Echec origine",
	"Anfahren der Startposition (Home) fehlgeschlagen",
	"Home fallito",
    "Homing fout"
};

const char MMSG_ERR_PROBING_FAILED[8][55] PROGMEM = {
	"�Զ���ƽʧ��",			// �Զ���ƽʧ��
	"Probing failed",
	"�ץ�`�ӥ�ʧ��",
	"Fallo de sondeo",
    "Echec sonde",
	"Messung des D��sen-/Druckbettabstands fehlgeschlagen",
	"Probing fallito",
    "Sensor fout"
};

const char MMSG_SMARTCONFIG_TITLE[8][20] PROGMEM = {
	"����WIFI����",			
	"WIFI CONFIG",
	"�o��LAN�O��",
	"CONFIGURACION WIFI",
    "CONFIG WIFI",
    "WIFI Konfiguration",
    "CONFIG. WIFI",
    "WiFi configuratie"
};

const char MMSG_SMARTCONFIG_TEXT[8][660] PROGMEM = {
	"���������Ͻ���ʾ��������״̬,���������ʾIP��ַ.\r\nOFF: δ���ӵ�WIFI����\r\nʹ���ֻ���������ӵ�WIFI�ȵ�ESP32WIFIWDxxxxxx\r\nʹ�����������http://10.10.0.1:88/, ҳ�����ʾ�������õ�WIFI����. ������������������룬���Join. ҳ����ʾSuccess��ʾ�����ɹ�, Ȼ��������ӡ��.\r\nʼ����ʾconnecting...: WIFI�豸����",
	"The upper right icon on the main menu shows the wifi\r\nstatus, a IP address will be displayed after networking.\r\nOFF: Not connected to WIFI network. Use phone or computer to join the hotspot ESP32WIFIWDxxxxxx\r\nUse a browser to visit http://10.10.0.1:88/\r\nClick the scanned network name and enter the password.\r\nClick Join and wait. When the page prompts Success, restart the printer.\r\nAlways showing connecting...: WIFI device failure.",
	"�ᥤ���˥�`�����ϤΥ��������wifi���Ʃ`������ʾ��, IP���ɥ쥹�ϥͥåȥ�`������˱�ʾ����ޤ�. \r\nOFF: WIFI�ͥåȥ�`���˽ӾA����Ƥ��ޤ���.  WIFI�ۥåȥ��ݥå�ESP32WIFIWDxxxxxx�˽ӾA.�֥饦����ʹ�ä���http://10.10.0.1:88/�˥����������ޤ�.������󤷤��ͥåȥ�`�����򥯥�å�����, �ѥ���`�ɤ��������ޤ�. [Join]�򥯥�å����ƴ��C���ޤ�. [�μӤ��ƴ��C]�򥯥�å����ޤ�.  �ک`���ˡ�Success���ȱ�ʾ���줿�顢�ץ�󥿤������Ӥ��ޤ�.\r\n���˽ӾA���ʾ���Ƥ��ޤ�...��WIFI�ǥХ������Ϻ�. ",
	"El icono superior derecha del men�� principal muestra el estado de Wi-Fi..\r\nOFF: no conectado a la red WIFI. ��nete al punto de acceso ESP32WIFIWDxxxxxx. Visite http://10.10.0.1:88/. Haga clic en el nombre de la red escaneada e ingrese la contrasena. Haz clic en Join y espera. Cuando la p��gina indique Success, reinicie la impresora.\r\nSiempre mostrando la connecting...: falla del dispositivo WIFI.",
    "L'icone en haut �� droite du menu principal montre l'��tat du wifi, une adresse IP sera affich��e apr��s la mise en r��seau.\r\nOFF: Non connect�� au r��seau WIFI. Utilisez le t��l��phone ou l'ordinateur pour rejoindre le hotspot ESP32WIFIWDxxxxxx. Utilisez un navigateur pour visiter http://10.10.0.1:88/. Cliquez sur le nom du r��seau num��ris�� et entrez le mot de passe. Cliquez sur Joindre et attendre. Lorsque la page invite le succ��s, red��marrez l'imprimante.",
    "Das Icon oben rechts im Hauptmen�� zeigt den Wifi-Status. Bei bestehender Netzwerkverbindung wird die IP-Addresse angezeigt.\r\nOFF: NIcht mit dem WiFi Netzwerk verbunden. Nutzen Sie eine Telefon oder den PC um sich mit dem Hotspot WIFICAMWDxxxxxx zu verbinden\r\n- Rufen Sie in einem Internetbrowser die Adresse http://10.10.0.1:88/ auf\r\n- klicken Sie den angezeigten Netzwerknamen an und geben Sie das Passwort ein.\r\n-klicken Sie auf verbinden und warten Sie. Wenn die Seite Ihnen eine erfolgreiche Verbindung anzeigt, dann starten Sie den Drucker neu.\r\nWird fortwahrend nur Verbinde... angezeigt liegt ein Problem mit der Wifi-Verbindung vor.",
    "L'icona in alto a destra sulle principali visualizzato il menu di stato del Wi-Fi, un indirizzo IP verr�� visualizzato dopo rete.\r\nOFF: non connesso alla rete WIFI. Usa il telefono o il computer per unirti all'hotspot ESP32WIFIWDxxxxxx. Utilizza un browser per visitare http://10.10.0.1:88/. Fare clic sul nome della rete scansionata e immettere la password. Fai clic su Partecipa e attendi. Quando la pagina viene richiesto Successo, riavviare la stampante.",
    "Het icoon rechtsboven in het hoofdmenu geeft de WiFi status aan,\r\n\een IP-adres wordt weergegeven indien verbonden met een netwerk.\r\nIT: Niet verbonden met het WiFi netwerk. Gebruik een telefoon of computer om verbinding te maken met hotspot WIFICAMWDxxxxxx\r\nGebruik een internetbrowser om naar http://10.10.0.1:88/ te gaan.\r\nKlik op netwerk naam en voer het paswoord in.\r\nKlik op Verbind en wacht. Zodra er een verbinding tot stand is gebracht, herstart de printer.\r\nIndien de status blijft staan op Verbinden...: WiFi fout"
};

const char MMSG_OTA_TITLE[8][15] PROGMEM = {
	"WIFI�̼�����",			
	"WIFI OTA",
	"WIFI OTA",
	"WIFI OTA",
    "WIFI OTA",
    "WIFI OTA",
    "WIFI OTA",
    "WiFi"
};

const char MMSG_BACK[8][11] PROGMEM = {
	"  ����",			// 
	"  Back ",
	"  ����",
	" Volver ",
    " Arri��re",
    "Hauptmen��",
    " Indietro",
    " Terug"
};

const char MMSG_WAITING[8][16] PROGMEM = {
	" �ȴ�...",			// 
	" Waiting...",
	"���äƤ��ޤ�...",
	"Esperando...",
    "Attendre...",
    " warte...",
    "Inatteso...",
    "Even geduld..."
};

const char MMSG_OTA_LINE[8][150] PROGMEM = {
	"\r\n ���ڼ�����, �벻Ҫ�رյ�Դ\r\n ���³ɹ���, ��������ӡ��",
	" Checking for updates,\r\n please do not turn off the power.\r\n Reboot the printer after the update.",
	" ���åץǩ`�Ȥ�_�J����,\r\n �Դ���Ф�ʤ��Ǥ�������.\r\n ������˥ץ�󥿤������Ӥ��Ƥ�������.",
	" Comprobando actualizaciones,\r\n Por favor, no apague la alimentaci��n.\r\n Reinicie la impresora despu��s de la actualizaci��n.",
    "V��rification des mises �� jour,\r\nVeuillez ne pas couper l'alimentation.\r\nRed��marrez l'imprimante apr��s la mise �� jour.",
    "Suche nach Aktualisierungen...,\r\n Bitte den Drucker nicht ausschalten!\r\n Starten Sie den Drucker nach dem Update neu.",
    "Verifica aggiornamenti,\r\nsi prega di non spegnere l'alimentazione.\r\nRiavvia la stampante dopo l'aggiornamento.",
    "Zoekt naar updates,\r\nzet de printer NIET uit!\r\nHerstart de printer na het uitvoeren van de update."
};

const char MMSG_ERROR_TITLE[8][8] PROGMEM = {
	"����",			
	"Error",
	"����`",
	"Error",
    "Erreur",
    "Fehler",
    "Errore",
    "Fout"
};

const char MMSG_NOTICE_TITLE[8][11] PROGMEM = {
	"��ʾ",			
	"Notice",
	"֪ͨ",
	"Notar",
    "Remarquer",
    "Anmerkung",
    "Avviso",
    "Let op"
};

const char MMSG_SDCARD_STOP[8][26] PROGMEM = {
	" ����ֹͣ��ӡ...",
	" Stop printing...",
	" ӡˢ��ֹͣ���ޤ�...",
	" Dejar de imprimir ...",
    " Arr��ter l'impression...",
    " beende den Druck...",
    " Interrompi la stampa...",
    " Stop printen..."
};

const char MMSG_SDCARD_PAUSE[8][30] PROGMEM = {
	" ������ͣ��ӡ...",
	" Pause printing...",
	" ӡˢ��һ�rֹͣ���Ƥ��ޤ�...",
	" Pausa la impresi��n ...",
    " Suspendre l'impression...",
    " pausiere den Druck...",
    " Metti in pausa la stampa...",
    " Pauseer printen..."
};

const char MMSG_SDCARD_RESUME[8][52] PROGMEM = {
	" ���ڻָ���ӡ...",
	" Resume printing...",
	" ӡˢ�����_���Ƥ��ޤ�...",
	" Reanudar la impresi��n ...",
    " Reprendre l'impression...",
    " f��hre den letzten gespeicherten Druck fort...",
    " Riprendi la stampa...",
    " Hervat printen..."
};

const char MMSG_SDCARD_SAVE[8][44] PROGMEM = {
	" ���ڱ���ػ�...",
	" Save printing...",
	" ӡˢ�򱣴椷�Ƥ��ޤ�...",
	" Guardar impresi��n ...",
    " Reprendre l'impression...",
    " speichere den aktuellen Druckstatus...",
    " Riprendi la stampa...",
    " Sla printen op..."
};

const char MMSG_RUNOUT_1[8][45] PROGMEM = {
	"��⵽��˿ȱʧ����ӡ��ͣ",
	"Filament runout, print paused",
	"�ե��������졢ӡˢһ�rֹͣ",
	"Salida de filamento, impresi��n en pausa",
    "Enregistrer l'impression...",
    "Kein Filament vorhanden, Druck pausiert",
    "Salva stampa...",
    "Printfilament is op, print gepauseerd"
};

const char MMSG_CONTINUE[8][12] PROGMEM = {
	" ���� ",			
	"Continue",
	"�־A����",
	"Continuar",
    "Continuer",
    "Fortfahren",
    "Continua",
    "Hervat"
};

const char MMSG_MAIN_BUTTON1[8][12] PROGMEM = {
	"   ��ӡ",		// ��ӡ
	"   Print",
	"  ӡˢ����",
	" Impresi��n",
    " Impression",
    "  Drucken",
    "  Stampa",
    "  Print"
};

const char MMSG_MAIN_BUTTON2[8][17] PROGMEM = {
	"   ά��",
	"Maintenance",
	" ���ƥʥ�",
	"Mantenimiento",
    " Entretien",
    " Wartung",
    "Manutenzione",
    " Onderhoud"
};

const char MMSG_MAIN_BUTTON3[8][16] PROGMEM = {
	"   ����",
	"  Setting",
	"   �O��",
	"  Ajuste",
    "  R��glage",
    "Einstellungen",
    " Ambiente",
    " Instelling"
};

const char MMSG_MAIN_BUTTON4[8][14] PROGMEM = {
	"   ����",
	"   Help",
	"  ������",
	"  Ayuda",
    " Aidez-moi",
    "   Hilfe",
    "   Aiuto",
    "   Help"
};

const char MMSG_TF_TITLE[8][32] PROGMEM = {
	"ѡ���ӡ�ļ�",
	"Select Print File",
	"ӡˢ�ե�������x�k",
	"Seleccione Imprimir Archivo",
    "S��lectionnez Fichier Imprimer",
    "Druckdatei auswahlen",
    "Seleziona Stampa file",
    "Selecteer Print Bestand"
};

const char MMSG_NEXT_PAGE[8][14] PROGMEM = {
	"  ��һҳ   ",
	"  Next     ",
	"   ��      ",
	" Siguiente ",
    " Prochain",
	" weiter",
	" Prossimo",
    " Volgende"
};

const char MMSG_PRE_PAGE[8][14] PROGMEM = {
	"  ��һҳ   ",
	" Previous  ",
	"   ǰ      ",
	" Anterior  ",
    " Precedent",
	"  zur��ck ",
	"Precedente",
    "  Vorige"
};

const char MMSG_LANGUAGE_TITLE[8][27] PROGMEM = {
	"ѡ���������",
	"Language Setting",
	"���Z�O��",
	"Configuraci��n de idioma",
    "Param��tres de langue",
    "Spracheinstellungen",
    "Impostazione della lingua",
    "Taal Instelling"
};

const char MMSG_LANGUAGE_ITEM1[8][12] PROGMEM = {
	" ����",
	" Chinese",
	" �й��Z",
	" Chino",
    " Chinoise",
	" Chinesisch",
	" Cinese",
    " Chinees"
};

const char MMSG_LANGUAGE_ITEM2[8][10] PROGMEM = {
	" Ӣ��",
	" English",
	" Ӣ�Z",
	" Ingl��s",
    " Anglaise",
	" Englisch",
	" Inglese",
    " Engels"
};

const char MMSG_LANGUAGE_ITEM3[8][12] PROGMEM = {
	" ����",
	" Japanese",
	" �ձ��Z",
	" Japoneses",
    " Japonais",
	" Japanisch",
	" Giapponese",
    " Japans"
};

const char MMSG_LANGUAGE_ITEM4[8][12] PROGMEM = {
	" ��������",
	" Spanish",
	" ���ڥ����Z",
	" Espanola",
    " Espanol",
	" Spanisch",
	" Spagnola",
    " Spaans"
};

const char MMSG_LANGUAGE_ITEM5[8][14] PROGMEM = {
    " ����",
	" French",		
    " �ե���Z",
    " Frances",
	" Francaise",
	" Franzosisch",
	" Francese",
    " Frans"
};

const char MMSG_LANGUAGE_ITEM6[8][12] PROGMEM = {
    " ����",
	" German",		
    " �ɥ�����",
    " Aleman",			
	" Allemande",
	" Deutsche",
	" Tedesca",
    " Duitse"
};

const char MMSG_LANGUAGE_ITEM7[8][14] PROGMEM = {
    " �������",
	" Italian",	
    " �����ꥢ�Z",
    " Italiano",
	" Italienne",
	" Italienisch",
	" Italiana",
    " Italiaans"
};

const char MMSG_LANGUAGE_ITEM8[8][16] PROGMEM = {
    " ������",
	" Dutch",	
    " ��������",
    " Holandesa",
	" N��erlandaise",
	"Niederlandisch",
	" olandese",
    " Nederlands"
};


const char MMSG_PREPARE_TITLE[8][32] PROGMEM = {
	"��ӡ��ά��",
	"Printer Maintenance",
	"�ץ�󥿤Υ��ƥʥ�",
	"Mantenimiento de la impresora",
    "Maintenance de l'imprimante",
    "Druckerwartung",
    "Manutenzione della stampante",
    "Printer Onderhoud"
};

const char MMSG_SETTING_FILAMENT[8][26] PROGMEM = {
	"    ��˿����",
	"Filament Operation",
	"  �ե�����Ȳ���",
	"    Filamento",
    "op��ration filament",
    "Filamenteinstellungen",
    "    Filamento",
    "Filament bediening"
};

const char MMSG_SETTING_TEMP[8][16] PROGMEM = {
	"    �¶�����",
	"   Temperature",
	"    �¶��O��",
	"   Temperatura",
    "   Temp��rature",
    "   Temperatur",
    "   Temperatura",
    "   Temperatuur"
};

const char MMSG_SETTING_SPEED[8][20] PROGMEM = {
	"    �ٶ�����",
	"     Speed",
	"  ���ԩ`���O��",
	"   Velocidad",
    "    Vitesse",
	"Geschwindigkeit",
	"   Velocita",
    "   Snelheid"
};

const char MMSG_SETTING_SAVE[8][23] PROGMEM = {
	"    ����ػ�",
	"    Save&Off",
	"   ӡˢ�򱣴�",
	" Guardar impresi��n",
    "    Save&Off",
    "Speichern&Verlassen",
    " Salva e spegni",
    " Opslaan&Uitzetten"
};

const char MMSG_SETTING_FEED[8][22] PROGMEM = {
	"    �Զ���˿",
	"  Filament Feed",
	"  �Ԅӥ磻���ͤ�",
	"Entrada de filamento",
    " Charge filament",
	" Filament Zuf��hrung",
	" Carica filamento",
    " Filament Invoer"
};

const char MMSG_SETTING_RETRACT[8][23] PROGMEM = {
	"    �Զ���˿",
	" Filament Retract",
	"  �Ԅӥ磻���ȥ",
	"Salida de filamento",
    "Decharger le filament",
	" Filament R��ckzug",
	" Scarica Filament",
    "Filament Terugvoer"
};

const char MMSG_SETTING_HEAT[8][16] PROGMEM = {
	"    �ֶ�����",
	"    Preheat",
	"    ��᤹��",
	"   Precalentar",
    "   Pr��chauffer",
    "    Vorheizen",
    "  Preriscaldare",
    "    Opwarmen"
};

const char MMSG_SETTING_JOG[8][20] PROGMEM = {
	"    �㶯ģʽ",
	"   Jog Mode",
	"   ���祰��`��",
	"  Modo de jog",
    " Mode jogging",
    "Achsenbewegungen",
    "  Modalit�� Jog",
    "   Jog Modus"
};

const char MMSG_SETTING_LEVELBED[8][22] PROGMEM = {
	"    ƽ̨У׼",
	"   Level Bed",
	"  ��٥�٥å�",
	" Nivelar plataforma",
    "  Regl. Niv. lit",
	" Druckbett leveln",
	"  Livella piano",
    "  Afstellen Bed"
};

const char MMSG_SETTING_ZOFFSET[8][15] PROGMEM = {
	"    Z��ƫ��",
	"   Z Offset",
	"   Z���ե��å�",
	"   Desfase Z",
    "  Decalage Z",
	" Z einstellen",
	"   Z Offset",
    "   Z Marge"
};

const char MMSG_SETTING_SENSOR[8][22] PROGMEM = {
	"�ӽ����ظ߶ȵ���",
	" Proximity Height",
	"   ���Ӥθߤ�",
	"   Proximidad",
    "proximit�� Hauteur",
    " Proximity Hohe",
    "Proximity Altezza",
    "Hoogte-sensor Hoogte"
};
const char MMSG_SETTING_MOTOROFF[8][24] PROGMEM = {
	"    �رյ��",
	"   Motor Off",
	"  ��`���`���Ф�",
	"  Motor apagado",
    "  Moteur ��teint",
    "Motoren deaktivieren",
    "  Motore spento",
    "   Motor Uit"
};

const char MMSG_SETTING_TITLE[8][25] PROGMEM = {
	"��ӡ����������",
	"Printer Setting",
	"�ץ�󥿩`�O��",
	"Ajuste de par��metros",
    "Param��tre d'imprimante",
    "Drucker Einstellungen",
    "Impostazioni stampante",
    "Printer Instelling"
};

const char MMSG_SETTING_WIFI[8][20] PROGMEM = {
	"  Wifi��������",
	"   Wifi Setting",
	"  �o��LAN�O��",
	"   Red wifi",
    "  R��glage Wifi",
    "Wifi Einstellungen",
    " Wifi Impostazione",
    " WiFi Instelling"
};

const char MMSG_SETTING_POWEROFF[8][26] PROGMEM = {
	"  ��ӡ��ɹػ�",
	" Auto Power Off",
	"  �ץ��ȥ���",
	"Apagado autom��tico",
    "Arr��t automatique",
    "  Ausschalten",
    "Auto spegnimento",
    " Auto Power Off"
};

const char MMSG_SETTING_LANGUAGE[8][20] PROGMEM = {
	"    ��������",
	" Language Setting",
	"    ���Z�O��",
	"     Idioma",
    "     Langue",
    "Spracheinstellung",
    "    linguaggio",
    " Taal Instelling"
};

const char MMSG_SETTING_INFO[8][21] PROGMEM = {
	"    �豸��Ϣ",
	"   Machine Info",
	"  �ǥХ������",
	"   Informacion",
    "   Information",
	"Druckerinformation",
	"  Informazione",
    "  Machine Info"
};

const char MMSG_SETTING_RUNOUT[8][22] PROGMEM = {
	"    ��˿���",
	"  Runout Sensor",
	"  �磻��`�ʳ�",
	"Sensor de filamento",
    "Capteur faux-rond",
    "  Filamentsensor",
    "  runout Sensor",
    " Filament Sensor"
};

const char MMSG_SETTING_SELFTEST[8][21] PROGMEM = {
	"    �����Լ�",
	"     Post",
	"  ����եƥ���",
	"   Autoprueba",
    "     Publier",
    "Druckerselbsttest",
    "   Inviare",
    "   Zelftest"
};

const char MMSG_SETTING_POWERSAVE[8][26] PROGMEM = {
	"    �ڵ�ģʽ",
	"Power Save Mode",
	"   ��능�`��",
	"Ahorro de energ��a",
    "Economie d'��nergie",
    "Stromspareinstellung",
    "Risparmio energetico",
    "Energie Besparing Modus"
};

const char MMSG_SETTING_RESTORE[8][20] PROGMEM = {
	"    �̼�����",
	"    Parameters",
	"    �ѥ��`��",
	"    Par��metro",
    "   Param��tres",
    "   Parameter",
    "    Parametri",
    "   Parameters"
};

const char MMSG_SETTING_IAP[8][20] PROGMEM = {
	"    �����̼�",
	"    Update",
	"    ���¤���",
	"  Actualizaci��n",
    "  Mettre �� jour",
    "    Update",
    "   Aggiornare",
    "    Update"
};

const char MMSG_STATUS_TITLE_PRINTING[8][16] PROGMEM = {
	"���ڴ�ӡ",
	"Printing",
	"ӡˢ",
	"Impresi��n",
    "Impression",
	"Drucke",
	"Stampa",
    "Printen"
};

const char MMSG_STATUS_TITLE_PAUSE[8][20] PROGMEM = {
	"��ӡ��ͣ",
	"Print Pause",
	"ӡˢһ�rֹͣ",
	"Pausa de impresi��n",
    "Imprimer Pause",
    "Druckpause",
    "Stampa Pausa",
    "Print Pause"
};

const char MMSG_STATUS_LABEL_FILE[8][9] PROGMEM = {
	"�ļ�",
	"File",
	"�ե�����",
	"Archivo",
    "Fichier",
    "Datei",
    "File",
    "Bestand"
};

const char MMSG_STATUS_LABEL_SPEED[8][19] PROGMEM = {
	"��ӡ�ٶ�",
	"Speed",
	"ӡˢ�ٶ�",
	"Velocidad",
    "Vitesse",
	"Geschwindigkeit",
	"Velocita",
    "Snelheid"
};

const char MMSG_STATUS_LABEL_NOZZLE1[8][10] PROGMEM = {
	"����ͷ",
	"Left",
	"��Υ���",
	"Izquierdo",
	"La gauche",
	"links",
	"Sinistra",
    "Links"
};

const char MMSG_STATUS_LABEL_NOZZLE2[8][10] PROGMEM = {
	"����ͷ",
	"Right",
	"�ҥΥ���",
	"Derecho",
	"Droit",
	"rechts",
	"Destro",
    "Rechts"
};

const char MMSG_STATUS_LABEL_BED[8][12] PROGMEM = {
	"ƽ̨�¶�",
	"Bed",
	"�٥å�",
	"Cama",
    "Lit",
	"Druckbett",
	"Piatto",
    "Bed"
};

const char MMSG_STATUS_LABEL_ELAPSED[8][15] PROGMEM = {
	"����ʱ��",
	"Elapsed",
	"�U�^",
	"Transcurrido",
    "Ecoul��",
    "abgelaufen",
    "Trascorso",
    "Verstreken"
};

const char MMSG_STATUS_LABEL_REMAIN[8][15] PROGMEM = {
	"ʣ��ʱ��",
	"Remain",
	"�Ф�ޤ�",
	"Permanecer",
    "Rester",
    "verbleibend",
    "Rimani",
    "Resterend"
};

const char MMSG_STATUS_LABEL_PERCENT[8][13] PROGMEM = {
	"��ӡ����",
	"Percent",
	"�ѩ`�����",
	"Por ciento",
    "Pour cent",
    "Prozent",
    "Per cento",
    "Percentage"
};

const char MMSG_EXIT[8][11] PROGMEM = {
	"  �˳�",
	"  Quit",
	" �K�ˤ���",
	"  Dejar",
    "Quitter",
	" Beenden",
	"Smettere",
    "  Stop"
};

const char MMSG_PAUSE[8][10] PROGMEM = {
	"  ��ͣ",
	"  Pause",
	" һ�rֹͣ",
	"  Pausa",
    "  Pause",
    "  Pause",
    "  Pausa",
    "  Pause"
};

const char MMSG_RESUME[8][12] PROGMEM = {
	"  ����",
	"  Resume",
	"  �A����",
	"  Continuar",
    "  R��sum��",
    " Fortsetzen",
    "  Riprendi",
    "  Hervat"
};

const char MMSG_SETTING[8][15] PROGMEM = {
	"  ����",
	" Setting",
	"  �O��",
	" Ajuste",
    " R��glage",
    " Einstellung",
    "Ambientazione",
    " Instelling"
};

const char MMSG_YES[8][7] PROGMEM = {
	"  ȷ��",
	"  YES",
	"  �Ϥ�",
	"  Si",
    "  OUI",
    "  JA",
    "  Si",
    "  JA"
};

const char MMSG_NO[8][8] PROGMEM = {
	"  ȡ��",
	"  NO",
	" ������",
	"  NO",
    "  NON",
    " NEIN",
    "  NO",
    "  NEE"
};

const char MMSG_PRINTINT_SETTING_TITLE[8][30] PROGMEM = {
	"��ӡ��������",
	"Printing Setting",
	"ӡˢ�O��",
	"Configuraci��n de impresi��n",
    "Param��tres d'impression",
    "Druckeinstellungen",
    "Impostazioni di stampa",
    "Print Instelling"
};

const char MMSG_CONFIRM_TITLE[8][13] PROGMEM = {
	"ȷ��",
	"Confirm",
	"�_�J����",
	"Confirmar",
    "Confirmer",
    "Bestatigen",
    "Confermare",
    "Bevestig"
};

const char MMSG_QUIT_PRINT_CONFIRM_TEXT[8][166] PROGMEM = {
	"\r\n\r\n ��ǰ��ӡ������ֹ�����Ҳ��ɻָ���\r\n ��ȷ��Ҫ�˳���?",
	"\r\n\r\nThe current print job will be aborted and\r\ncannot be recovered.\r\nAre you sure you want to quit?",
	"\r\n\r\n�F�ڤ�ӡˢ����֤���ֹ����,�؏ͤ��뤳�ȤϤǤ�\r\n�ޤ���.\r\n�����ˤ����?",
	"\r\n\r\nEl trabajo de impresi��n actual se cancelar�� y no se podr�� recuperar.\r\nSeguro que quieres salir?",
    "\r\n\r\nLe travail d'impression en cours sera abandonn�� et ne pourra pas ��tre r��cup��r��.\r\nEtes-vous sur de vouloir quitter?",
    "\r\n\r\nDer aktuelle Druck wird abgebrochen und kann danach nicht wieder aufgenommen werden!\r\nSind Sie sicher, dass Sie den Druck wirklich abbrechen wollen?",
    "\r\n\r\nIl lavoro di stampa corrente verr�� interrotto e non potr�� essere ripristinato.\r\nSei sicuro di voler uscire?",
    "\r\n\r\nDe huidige printtaak wordt gestopt en kan niet worden hervat.\r\nWeet je zeker dat je wilt stoppen?"
};

const char MMSG_FILAMENT_OPERATION_TITLE[8][30] PROGMEM = {
	"��˿����",
	"Filament Operation",
	"�ե�����Ȳ���",
	"Operaci��n del filamento",
    "Fonctionnement du filament",
    "Filamenteinstellungen",
    "Funzionamento del filamento",
    "Filament Werking"
};

const char MMSG_OK[8][12] PROGMEM = {
	"  ȷ��",
	"  OK",
	"  OK",
	"DE ACUERDO",
    " D'accord",
    "  OK",
    "  ok",
    "  OK"
};

const char MMSG_CANCEL[8][12] PROGMEM = {
	"  ȡ��",
	" Cancel",
	" ����󥻥�",
	" Cancelar",
    " Annuler",
    " Abbruch",
    " Annulla",
    " Annuleer"
};

const char MMSG_PREHEAT_TITLE[8][42] PROGMEM = {
	"����Ŀ���¶�",
	"Set Target Temperature",
	"Ŀ���¶Ȥ��O������",
	"Ajustar la temperatura objetivo",
    "D��finir la temp��rature cible",
    "gew��nschte Ziel-Temperatur einstellen",
    "Imposta la temperatura target",
    "Stel Doel Temperatuur in"
};

const char MMSG_ERROR_MINTEMP[8][54] PROGMEM = {
	"��ͷ����: �޷���ȡ����Ч�¶�, ������ͷ�ӿ�",
	"Nozzle failure: temperature can't be read",
	"�Υ������: �¶Ȥ��i��ʤ�",
	"Fallo de la boquilla: error de temperatura",
    "Panne de buse: la temp��rature ne peut pas ��tre lue",
    "D��senfehler: Temperatur kann nicht ermittelt werden",
    "Guasto ugello: impossibile leggere la temperatura",
    "Printkop fout: temperatuur kan niet worden afgelezen"
};

const char MMSG_ERROR_BEDTEMP[8][60] PROGMEM = {
	"�ȴ�����: �޷���ȡ����Ч�¶�, �����ȴ��ӿ�",
	"Bed failure: temperature can't be read",
	"�٥åɲ���: �¶Ȥ��i��ȡ��ʤ�",
	"Falla de cama: la temperatura no se puede leer",
    "Panne du lit: la temp��rature ne peut pas ��tre lue",
    "Heizbettfehler: Temperatur kann nicht ermittelt werden",
    "Guasto al letto: impossibile leggere la temperatura",
    "Bed fout: temperatuur kan niet worden afgelezen"
};

const char MMSG_ERROR_MAXTEMP[8][68] PROGMEM = {
	"��ͷ����: �¶ȳ�����Ч��Χ",
	"Nozzle failure: temperature exceeds maximum",
	"�Υ���ι���: �¶Ȥ���߂��򳬤��Ƥ��ޤ�",
	"Fallo de la boquilla: temperatura demasiado alta",
    "Panne de buse: la temp��rature d��passe le maximum",
    "D��senfehler: Temperatur ��bersteigt den zulassigen Hochstwert!",
    "Guasto ugello: la temperatura supera il massimo",
    "Printkop fout: temperatuur hoger dan toegestaan"
};

const char MMSG_FILAMENT_TYPE_NAME1[4] PROGMEM = {
	"PLA"
};

const char MMSG_FILAMENT_TYPE_NAME2[4] PROGMEM = {
	"ABS"
};

const char MMSG_FILAMENT_TYPE_NAME4[10] PROGMEM = {
	"TPU 240��"
};

const char MMSG_FILAMENT_TYPE_NAME3[8][19] PROGMEM = {
	"������˿",
	"Other Filament",
	"��������",
	"Otro filamento",
    "Autre filament",
    "Anderes Filament",
    "Altro",
    "Ander Filament"
};
const char MMSG_FILAMENT_TYPE_TEMP1[8] PROGMEM = {
	"210��"
};

const char MMSG_FILAMENT_TYPE_TEMP2[8] PROGMEM = {
	"235��"
};

const char MMSG_FILAMENT_TYPE_TEMP3[8] PROGMEM = {
	"260��"
};

const char MMSG_FILAMENT_TYPE_TEMP4[6] PROGMEM = {
	"240��"
};

const char MMSG_FILAMENT_TYPE_TITLE[8][30] PROGMEM = {
	"ѡ����˿���� ",
	"Filament Type ",
	"�ե�����ȤηN�",
	"Tipo de filamento ",
    "Type de filament",
    "Filamenttyp",
    "Tipo di filamento",
    "Filament Type"
};



const char MMSG_FILAMENT_LEFT_IN_TITLE[8][34] PROGMEM = {
	"����ͷ�Զ���˿",
	"Left Nozzle Filament Feed",
	"�Ԅӥ磻���ͤ�",
	"Boquilla izquierda Feedin",
    "Alimentation de la buse gauche",
    "Filament laden linke D��se",
    "Alimentazione ugello sinistro",
    "Linker Printkop Filament Invoer"
};

const char MMSG_FILAMENT_RIGHT_IN_TITLE[8][35] PROGMEM = {
	"����ͷ�Զ���˿",
	"Right Nozzle Filament Feed",
	"�Ԅӥ磻���ͤ�",
	"Boquilla derecha Feedin",
    "Alimentation de la buse droite",
    "Filament laden rechte D��se",
    "Alimentazione ugello destro",
    "Rechter Printkop Filament Invoer"
};

const char MMSG_FILAMENT_LEFT_OUT_TITLE[8][35] PROGMEM = {
	"����ͷ�Զ���˿",
	"Left Nozzle Filament Retract",
	"�Ԅӥ磻���ȥ",
	"Boquilla izquierda retra��da",
    "R��tractation de la buse gauche",
    "Filamententladen linke D��se",
    "Retrazione ugello sinistro",
    "Linker Printkop Filament Uitvoer"
};

const char MMSG_FILAMENT_RIGHT_OUT_TITLE[8][35] PROGMEM = {
	"����ͷ�Զ���˿",
	"Right Nozzle Filament Retract",
	"�Ԅӥ磻���ȥ",
	"Boquilla derecha retra��da",
    "R��tracter la buse droite",
    "Filament entladen rechte D��se",
    "Retrazione ugello destro",
    "Rechter Printkop Filament Uitvoer"
};

const char MMSG_FILAMENT_IN_TITLE[8][22] PROGMEM = {
	"�Զ���˿",
	"Filament Feed",
	"�Ԅӥ磻���ͤ�",
	"Entrada de filamento",
    "Charge filament",
	"Filament laden",
	"Carica filamento",
    "Filament Invoer"
};

const char MMSG_FILAMENT_OUT_TITLE[8][22] PROGMEM = {
	"�Զ���˿",
	"Filament Retract",
	"�Ԅӥ磻���ȥ",
	"Salida de filamento",
    "Decharger le filament",
	"Filament entladen",
	"Scarica Filament",
    "Filament Uitvoer"
};

const char MMSG_FILAMENT_IN_LINE1[8][18] PROGMEM = {
	"���ڼ���...",
	"Heating...",
	"�ӟ�...",
	"Calefacci��n",
    "Chauffage...",
    "Aufheizen...",
    "Riscaldamento...",
    "Opwarmen..."
};

const char MMSG_FILAMENT_IN_LINE2[8][66] PROGMEM = {
	"�뽫��˿���뼷����ģ�飬Ȼ���Ե�Ƭ��",
	"Insert the filament and wait a while",
	"�ե�����Ȥ��뤷�Ƥ��Ф餯�����ޤ�",
	"Insertar el filamento y esperar un rato",
    "Ins��rez le filament et attendez un moment",
    "F��hren Sie das Filament ein und warten Sie dann einen Moment",
    "Inserisci il filamento e attendi qualche istante",
    ""
};

const char MMSG_FILAMENT_OUT_LINE2[8][37] PROGMEM = {
	"���Ե�",
	"Please wait a few minutes",
	"���֤�������������",
	"Por favor espere unos minutos",
    "Veuillez patienter quelques minutes",
    "Bitte warten Sie ein paar Minuten",
    "Attendi qualche minuto",
    "Enkele minuten geduld a.u.b."
};

const char MMSG_FILAMENT_IN_LINE3[8][36] PROGMEM = {
	"���ڽ�˿...",
	"Filament feeding...",
	"�ե�������ͤ�...",
	"Filamento de alimentaci��n",
    "Alimentation en filament...",
    "Lade Filament...",
    "Alimentazione del filamento...",
    "Filament invoeren..."
};

const char MMSG_FILAMENT_OUT_LINE3[8][32] PROGMEM = {
	"������˿...",
	"Filament retracting...",
	"�ե�����ȅ��s��...",
	"Filamento de retracci��n ...",
    "Alimentation en filament...",
    "Entlade Filament...",
    "Alimentazione del filamento...",
    "Filament uitvoeren..."
};

const char MMSG_HEATING_TITLE[8][15] PROGMEM = {
	"���ڼ���",
	"Heating",
	"�ӟ�",
	"Calefacci��n",
    "Chauffage",
    "Aufheizen",
    "Riscaldamento",
    "Opwarmen"
};

const char MMSG_JOB_TITLE[8][22] PROGMEM = {
	"�㶯ģʽ",
	"Jog Mode",
	"���祰��`��",
	"Modo de jog",
    "Mode jogging",
    "Achsenbewegungen",
    "Modalit�� Jog",
    "Jog Modus"
};

const char MMSG_RETURN_HOME[8][20] PROGMEM = {
	"   ����ԭ��",
	" Return Home",
	"  ԭ��ˑ���",
	"Volver a origen",
    "   Accueil",
    "   Zuhause",
    " Torna a casa",
    "  Keer Terug"
};

const char MMSG_LEVEL_TITLE[8][32] PROGMEM = {
	"Delta�Զ�У׼",
	"Delta Auto Calibration",
	"�ǥ륿�Ԅ�У��",
	"Delta Auto Calibration",
	"Etalonnage automatique Delta",
	"Delta Auto Calibration",
	"Calibrazione automatica delta",
    "Delta automatische kalibratie"
};

const char MMSG_BEGIN[8][10] PROGMEM = {
	"  ��ʼ",
	"  Begin",
	"  �٥���",
	" Comenzar",
    "Commencer",
    "  Start",
    "  Inizio",
    "  Begin"
};

const char MMSG_END[8][10] PROGMEM = {
	"  ����",
	"  End",
	" �K���",
	" Final",
    "  Fin",
    "  Ende",
    "  Fine",
    "  Eind"
};

const char MMSG_NEXT[8][12] PROGMEM = {
	"  ��һ��",
	"  Next",
	"  ��",
	" Siguiente",
    "Continuer",
	"Fortfahren",
	"Continua",
    " Volgende"
};

const char MMSG_LEVEL0_LINE1[8][230] PROGMEM = {
	"ƽ̨У׼������ͷΪ��׼, ���β���������ƽ̨4��������ͷ�ļ�϶,ȷ����ӡƽ̨ƽ������ͷ����ƽ̨.\r\n׼��һ�Ű�ֽ��ʼ.",
	"Level Bed is to measure and adjust the gap between the 4 points of the platform and the nozzle.\r\nPrepare a paper and begin.",
	"��٥�٥åɤ�, �ץ�åȥե��`��ȥΥ����4���g�Υ���åפ�y�����{�����뤳�ȤǤ�.\r\n�������⤷��ʼ��ޤ�.",
	"La cama nivelada es para medir y ajustar el espacio entre los 4 puntos de la plataforma y la boquilla.\r\nPreparar un papel y comenzar.",
    "Level Bed permet de mesurer et d'ajuster l'��cart entre les 4 points de la plateforme et la buse.\r\nPr��parez un papier et commencez.",
    "Das Druckbett wird gelevelt um den Abstand zwischen den 4 Eckpunkten der Druckplattform und der D��se korrekt einzustellen.\r\nHalten Sie ein Blatt normales (Schreib)Papier bereit und starten Sie dann den Vorgang.",
    "Level Bed serve per misurare e regolare la distanza tra i 4 punti della piattaforma e la bocchetta.\r\nPrepara un foglio e inizia.",
    "Level Bed is om de afstand tussen het printbed en de printkop of 4 plaatsten te meten en in te stellen.\r\nNeem een stuk papier en begin."
};

const char MMSG_LEVEL1_LINE1[8][250] PROGMEM = {
	"����ƽ̨�Һ󷽵���ĸ,ֱ����ͷ��ƽ̨�ļ�϶Ϊһ��ֽ�ĺ��.\r\n��ɺ����һ��.",
	"Adjust the nut on the right rear of the bed, until the gap is the thickness of a piece of paper.\r\nClick Next to continue.",
	"϶�g��һö�μ��κ񤵤ˤʤ�ޤ�,�٥åɤ����Ჿ�ˤ���ʥåȤ��{�����ޤ�.\r\n�Τؤ򥯥�å����ƾA���ޤ�.",
	"Ajustar la tuerca en la parte posterior derecha de la cama, hasta que el espa cio es el grosor de una hoja de papel Haga clic en Siguiente para continuar.",
    "Ajustez l'��crou �� l'arri��re droit du lit, jusqu'�� ce que l'��cart soit de l'��paisseur d'un morceau de papier.\r\nCliquer sur Suivant pour continuer.",
    "Bewegen Sie das Papier zwischen D��se und Druckbett. Wahrenddessen verstellen Sie die hintere rechte Einstellschraube (unter dem Druckbett), bis die D��se gerade eben sp��rbar das Blatt Papier ber��hrt.\r\nKlicken Sie danach auf Fortfahren.",
    "Regola il dado sul retro destro del letto, fino a quando lo spazio non �� lo spessore di un pezzo di carta.\r\nFare clic su Avanti per continuare.",
    "Pas de schroef aan de rechter achterzijde van het printbed aan totdat het de afstand gelijk is aan de dikte van het papier.\r\nKlik Volgende om verder te gaan."
};

const char MMSG_LEVEL2_LINE1[8][250] PROGMEM = {
	"����ƽ̨��󷽵���ĸ,ֱ����ͷ��ƽ̨�ļ�϶Ϊһ��ֽ�ĺ��.\r\n��ɺ����һ��.",
	"Adjust the nut on the left rear of the bed, until the gap is the thickness of a piece of paper.\r\nClick Next to continue.",
	"϶�g��һö�μ��κ񤵤ˤʤ�ޤ�, �٥åɤ����Ჿ�ˤ���ʥåȤ��{�����ޤ�.\r\n�Τؤ򥯥�å����ƾA���ޤ�.",
	"Ajustar la tuerca en la parte posterior izquierda de la cama, hasta que el esp acio es el grosor de una hoja de pap el. Haga clic enSiguiente para continuar",
    "Ajustez l'��crou sur l'arri��re gauche du lit, jusqu'�� ce que l'��cart soit l'��paisseur d'un morceau de papier.\r\nCliquer sur Suivant pour continuer.",
    "Bewegen Sie das Papier zwischen D��se und Druckbett. Wahrenddessen verstellen Sie die hintere linke Einstellschraube (unter dem Druckbett), bis die D��se gerade eben sp��rbar das Blatt Papier ber��hrt.\r\nKlicken Sie danach auf Fortfahren.",
    "Regola il dado sulla parte posteriore sinistra del letto, finch�� lo spazio non �� dello spessore di un pezzo di carta.\r\nFare clic su Avanti per continuare.",
    "Pas de schroef aan de linker achterzijde van het printbed aan totdat het de afstand gelijk is aan de dikte van het papier.\r\nKlik Volgende om verder te gaan."
};

const char MMSG_LEVEL3_LINE1[8][250] PROGMEM = {
	"����ƽ̨��ǰ������ĸ,ֱ����ͷ��ƽ̨�ļ�϶Ϊһ��ֽ�ĺ��.\r\n��ɺ����һ��.",
	"Adjust the nut on the left front of the bed, until the gap is the thickness of a piece of paper.\r\nClick Next to continue.",
	"϶�g��һö�μ��κ񤵤ˤʤ�ޤ�,�٥åɤ���ǰ��ˤ���ʥåȤ��{�����ޤ�.\r\n�Τؤ򥯥�å����ƾA���ޤ�.",
	"Ajustar la tuerca enla parte frontal iz quierda de la cama, hasta que el espa cio es el grosor de una hoja de papel Haga clic en Siguiente para continuar.",
    "Ajustez l'��crou sur l'avant gauche du lit, jusqu'�� ce que l'��cart soit l'��paisseur d'un morceau de papier.\r\nCliquer sur Suivant pour continuer.",
    "Bewegen Sie das Papier zwischen D��se und Druckbett. Wahrenddessen verstellen Sie die vordere linke Einstellschraube (unter dem Druckbett), bis die D��se gerade eben sp��rbar das Blatt Papier ber��hrt.\r\nKlicken Sie danach auf Fortfahren.",
    "Regola il dado sulla parte anteriore sinistra del letto, finch�� lo spazio non �� dello spessore di un pezzo di carta.\r\nFare clic su Avanti per continuare.",
    "Pas de schroef aan de linker voorzijde van het printbed aan totdat het de afstand gelijk is aan de dikte van het papier.\r\nKlik Volgende om verder te gaan."
};

const char MMSG_LEVEL4_LINE1[8][270] PROGMEM = {
	"����ƽ̨��ǰ������ĸ,ֱ����ͷ��ƽ̨�ļ�϶Ϊһ��ֽ�ĺ��.\r\n��ɺ����ƽ̨У׼.",
	"Adjust the nut on the right front of the bed, until the gap is the thickness of a piece of paper.\r\nClick End to finish Level Bed.",
	"϶�g��һö�μ��κ񤵤ˤʤ�ޤ�, �٥åɤ���ǰ��ˤ���ʥåȤ��{�����ޤ�. �K���򥯥�å����ƥ�",
	"Ajustar la tuerca en la parte frontal derecha de la cama, hasta que el espa cio es el grosor de una hoja de papel Haga clic en Finalizar para finalizar.",
    "Ajustez l'��crou sur le devant droit du lit, jusqu'�� ce que l'��cart soit l'��paisseur d'un morceau de papier.\r\nCliquez sur Fin pour terminer le lit de niveau.",
    "Bewegen Sie das Papier zwischen D��se und Druckbett. Wahrenddessen verstellen Sie die vordere rechte Einstellschraube (unter dem Druckbett), bis die D��se gerade eben sp��rbar das Blatt Papier ber��hrt.\r\nKlicken Sie danach auf Ende um den Vorgang abzuschlieben.",
    "Regola il dado sulla parte anteriore destra del letto, finch�� lo spazio non �� lo spessore di un pezzo di carta.\r\nFare clic su Fine per terminare Level Bed.",
    "Pas de schroef aan de rechter voorzijde van het printbed aan totdat het de afstand gelijk is aan de dikte van het papier.\r\nKlik Volgende om verder te gaan."
};

const char MMSG_NOTICE_MOVING[8][52] PROGMEM = {
	"\r\n\r\n �����ƶ�, ���Ե�...",
	"\r\n\r\n Moving, please wait...",
 	"\r\n\r\n �ƄӤ��Ƥ��ޤ�,��������������...",
	"\r\n\r\n En movimiento, por favor espere...",
    "\r\n\r\n D��m��nagement, veuillez patienter...",
    "\r\n\r\n F��hre Achsbewegung aus, bitte warten...",
    "\r\n\r\n Trasloco, attendere prego...",
    "\r\n\r\nAan het verplaatsen, even geduld..."
};

const char MMSG_ZOFFSET_TITLE[8][35] PROGMEM = {
	"Z��ƫ������",
	"Z Offset Setting",
	"Z���ե��å��O��",
	"Ajuste de compensaci��n de Z",
    "R��glage du d��calage Z",
    "Z-Versatz (Offset) Einstellung",
    "Impostazione offset Z",
    "Z Marge Instelling"
};

const char MMSG_SAVE[8][10] PROGMEM = {
	"  ����",
	"  Save",
	" ���椹��",
	" Guardar",
    " sauver",
    "Speichern",
    " Salva",
    " Opslaan"
};

const char MMSG_ZOFFSET_LINE[8][440] PROGMEM = {
	"Z��ƫ������΢����ͷ��ƽ̨�ļ�϶.\r\n׼��һ��ֽƬ������ͷ��. �����ť����΢��ƽ̨, ֱ����϶Ϊһ��ֽ�ĺ��.\r\n��ɺ��������˳�.",
	"The Z-axis offset is used to tune the gap between thenozzle and the platform. Prepare a piece of paper to beplaced under the nozzle. Click the button to move the\r\nplatform up and down until the gap is the thickness of a piece of paper. Click after finishing Save and exit.",
	"Z�S���ե��åȤ�ʹ�ä���, �Υ���ȥץ�åȥե��`���g�Υ���åפ�΢�{�����ޤ�. �Υ�����¤����ä��뼈��ʂ䤷�ޤ�. �ܥ���򥯥�å�����, ����åפ����κ񤵤ˤʤ�ޤǥץ�åȥե��`������¤��ƄӤ��ޤ�. \r\n�K�ˤ����顢[����]�򥯥�å����ƽK�ˤ��ޤ�.",
	"eje Z desplazamiento de recorte para la boquilla hueco y la plataforma. Preparar una hoja de papel colocado bajo la cabeza. Haga clic en la mesa de movimiento fino vertical, un espesor de la brecha hasta una hoja de papel. Cuando termine, haga clic en Guardar para salir.",
    "Le d��calage de l'axe Z est utilis�� pour r��gler l'��cart entre la buse et la plate-forme. Pr��parez un morceau de papier �� placer sous la buse. Cliquez sur le bouton pour d��placer la plate-forme vers le haut et vers le bas jusqu'�� ce que l'espace ait la m��me ��paisseur qu'un morceau de papier. Cliquez apr��s avoir termin�� Enregistrer et quitter.",
    "Die Einstellung des Z-Versatzes (Offset) ist notig, um den Abstand zwischen D��se und Druckplattform genau abzustimmen. Bereiten Sie ein Blatt normales (Schreib)Papier vor, welches Sie zwischen D��se und Druckbett positionieren. Dr��cken Sie anschliebend die entsprechende Schaltflache, um die D��se auf und ab zu bewegen, bis der Abstand gerade die Dicke des Papiers hat.  Wenn Sie fertig sind klicken Sie auf Speichern und Schlieben.",
    "L'offset dell'asse Z viene utilizzato per regolare la distanza tra l'ugello e la piattaforma. Preparare un foglio di carta da posizionare sotto la bocchetta. Fare clic sul pulsante per spostare la piattaforma su e gi�� fino a quando lo spazio �� lo spessore di un pezzo di carta. Fare clic dopo aver terminato Salva ed esci.",
    "De Z-as marge wordt gebruikt om de afstand tussen de printkop en het printbed te fine tunen. Gebruik een stukje normaal printpapier om onder de printkop te schuiven.\r\nGebruik de knoppen om de hoogte aan te passen totdat de afstand tussen printkop en printbed gelijk is aan de dikte van het papier. Daarna Opslaan en Afsluiten."
};

const char MMSG_MOTOROFF_LINE1[8][55] PROGMEM = {
	"\r\n\r\n ���е������ѹر�",
	"\r\n\r\n All motor outputs are off.",
	"\r\n\r\n ���٤ƤΥ�`���`�����ϥ��դǤ�.",
	"\r\n\r\n Todas las salidas del motor est��n apagadas.",
    "\r\n\r\n Toutes les sorties moteur sont d��sactiv��es.",
    "\r\n\r\n Alle Motoren sind deaktiviert.",
    "\r\n\r\n Tutte le uscite del motore sono disattivate.",
    "\r\n\r\nAlle motor outputs zijn uitgeschakeld."
};

const char MMSG_POXIMITY_TITLE[8][40] PROGMEM = {
	"�ӽ����ظ߶ȵ���",
	"Proximity Height Adjustment",
 	"���ӥ��󥵩`�θߤ��{��",
	"Ajuste de altura de proximidad",
    "R��glage de la hauteur de proximit��",
    "Hohenjustierung des Annaherungssensors",
    "Regolazione dell'altezza di prossimit��",
    "Hoogte-sensor Hoogte Aanpassing"
};

const char MMSG_POXIMITY_LINE[8][250] PROGMEM = {
	"ƽֹ̨ͣ���к�, �ӽ�����Ӧ��Ϊ��ͨ״̬. �������Ϊ�Ͽ�״̬, ���ɿ��̶��ӽ����ص���˿, ����΢���ӽ����ظ߶�, ֱ�����ص�ͨ. Ȼ��š����˿�̶��ýӽ�����.\r\n�ӽ����ص�ǰ״̬:",
	"After moving, the proximity should be on. If it is off, loosen the screw and fine-tune the height of proximity, until the switch is turned on. Then fix the position of proximity.\r\nCurrent status is:",
 	"�ƄӤ�����, ���Ӥ�����ˤʤäƤ���Ϥ��Ǥ�. ���դˤʤäƤ�����Ϥ�,�����å�������ˤʤ�ޤǥͥ��򾏤�,���Ӥθߤ���΢�{�����ޤ�. �Τ˽���λ�ä�̶����ޤ�.\r\n�F�ڤ�״�r�����¤ΤȤ���Ǥ�:",
	"Despu��s de mover, la proximidad debe estar en. De lo contrario, afloje el tornillo y ajuste la altura de proximidad hasta que se encienda el interruptor. Entonces arr��glalo. \r\nEl estado actual es:",
    "Apr��s le d��placement, la proximit�� doit ��tre activ��e. S'il est ��teint, desserrez la vis et ajustez la hauteur de proximit��, jusqu'�� ce que l'interrupteur soit allum��. Fixez ensuite la position de proximit��.\r\nL'��tat actuel est:",
    "Nach der Bewegung sollte der Annaherungssensor AN sein. Wenn er AUS ist, lockern Sie die Schraube und andern die Hohe des Sensors bis der Status unten auf AN springt. Danach fixieren Sie die Schraube wieder. Der aktuelle Status ist:",
    "Dopo lo spostamento, la prossimit�� dovrebbe essere attiva. Se �� spento, allentare la vite e regolare con precisione l'altezza di prossimit��, fino a quando l'interruttore �� acceso. Quindi fissare la posizione di prossimit��. Lo stato attuale ��:",
    "Na het bewegen zoud de hoogte-sensor aan moeten staan. Als deze uitstaat, draai de schroef los en pas de hoogte aan. de hoogte van de sensor, totdat deze aangaat.\r\nZet de sensor nu weer vast. De status is:"
};

const char MMSG_SWITCH_ON[8][7] PROGMEM = {
	"��ͨ",
	"ON",
 	"��",
	"ON",
    "SUR",
    "AU",
    "SOPRA",
    "AAN"
};

const char MMSG_SWITCH_OFF[8][5] PROGMEM = {
	"�Ͽ�",
	"OFF",
 	"����",
	"OFF",
    "DE",
    "AUS",
    "OFF",
    "UIT"
};

const char MMSG_MACHINE_TITLE[8][30] PROGMEM = {
	"�豸��Ϣ",
	"Machine Information",
 	"�ޥ������",
	"Informaci��n de la m��quina",
    "Informations sur la machine",
    "Gerateinformationen",
    "Informazioni sulla macchina",
    "Machine Informatie"
};

const char MMSG_MACHINE_ITEM1[8][26] PROGMEM = {
	"�豸����",
	"Device Name",
 	"װ����:",
	"Nombre del dispositivo",
    "Nom de l'appareil",
    "Geatename",
    "Nome del dispositivo",
    "Apparaat Naam"
};

const char MMSG_MACHINE_ITEM2[8][18] PROGMEM = {
	"�Ѵ�ӡʱ��",
	"Printed Time",
 	"ӡˢ���줿�r�g",
	"Hora impresa",
    "Temps imprim��",
    "Druckzeit",
    "Tempo stampato",
    "Totale Printtijd"
};

const char MMSG_MACHINE_ITEM3[8][23] PROGMEM = {
	"�̼��汾",
	"Firmware Version",
 	"�ե��`�०����",
	"Versi��n de firmware",
    "Version du firmware",
    "Firmwareversion",
    "Versione del firmware",
    "Firmware versie"
};

const char MMSG_MACHINE_ITEM4[8][16] PROGMEM = {
	"UI�汾",
	"UI Version",
 	"UI�ΥЩ`�����",
	"UI",
    "UI Version",
    "UI-Version",
    "UI Version",
    "UI Versie"
};

const char MMSG_MACHINE_ITEM5[8][25] PROGMEM = {
	"�豸���к�",
	"Device Serial",
 	"�ǥХ������ꥢ��",
	"Serie del dispositivo",
    "S��rie de l'appareil",
    "Seriennummer",
    "Seriale del dispositivo",
    "Serienummer"
};

const char MMSG_MACHINE_ITEM6[8][20] PROGMEM = {
	"WIFI�豸����",
	"WIFI Device",
 	"WIFI�ǥХ���",
	"Dispositivo wifi",
    "Dispositif WIFI",
    "WIFI-Gerat",
    "Dispositivo WIFI",
    "WiFi Apparaat"
};

const char MMSG_WIFISETTING_TITLE[8][20] PROGMEM = {
	"Wifi��������",
	"Wifi Setting",
	"�o��LAN�O��",
	"Red wifi",
    "Param��tres Wifi",
    "WiFi Einstellung",
    "Impostazione Wi-Fi",
    "WiFI Instelling"
};

const char MMSG_WIFISETTING_CONNECT[8][20] PROGMEM = {
	"  ����Wifi����",
	"  Connect Wifi",
	"   Wifi��ӾA",
	"  Conectar wifi",
    "Connectez le Wifi",
    " Wifi-Verbindung",
    "Connetti Wifi",
    "  Verbind WiFi"
};

const char MMSG_WIFI_INFO_TITLE[8][26] PROGMEM = {
	"WIFI�豸��Ϣ",
	"WIFI Device Information",
 	"WIFI�ǥХ������",
	"Informaci��n wifi",
    "Informations WIFI",
    "WiFi-Gerateinformation",
    "Informazioni WIFI",
    "WiFi Apparaat Informatie"
};


const char MMSG_WIFI_INFO_IP[8][14] PROGMEM = {
	"IP��ַ",
	"IP Address",
 	"IP���ɥ쥹",
	"IP WIFI",
    "Adresse IP",
    "IP Addresse",
    "Indirizzo IP",
    "IP Adres"
};

const char MMSG_WIFI_INFO_AP[8][16] PROGMEM = {
	"AP",
	"AP",
 	"AP",
	"AP",
    "AP",
    "Accesspoint",
    "AP",
    "AP"
};

const char MMSG_WIFI_INFO_CLOUD[8][21] PROGMEM = {
	"������",
	"Cloud Connection",
	"���饦�ɽӾA",
	"Conexi��n a la nube",
    "Connexion au cloud",
    "Cloud Verbindung",
    "Connessione cloud",
    "Cloud Verbinding"
};

// const char MMSG_WIFI_OTA[8][30] PROGMEM = {
// 	"��������WIFI�豸�̼�",
// 	"Update WIFI Firmware Online",
//  	"WIFI�ե��`�०����OTA",
// 	"Firmware WIFI OTA",
// };

const char MMSG_PRINTEND_TITLE[8][22] PROGMEM = {
	"��ӡ���",
	"Print Completed",
 	"ӡˢ����",
	"Imprimir Completado",
    "Impression termin��e",
    "Druck abgeschlossen",
    "Stampa completata",
    "Print Afgerond"
};

const char MMSG_PRINTEND_FILE[8][22] PROGMEM = {
	"�ļ���:",
	"Filename:",
 	"�ե�������:",
	"Nombre del archivo:",
    "Nom de fichier:",
    "Dateiname:",
    "Nome del file:",
    "Bestandsnaam:"
};

const char MMSG_PRINTEND_TIME[8][22] PROGMEM = {
	"��ӡʱ��:",
	"Print Time:",
 	"ӡˢ�r�g:",
	"Tiempo de impresi��n:",
    "Temps d'impression:",
    "Druckdauer:",
    "Tempo di stampa:",
    "Print Tijd:"
};

const char MMSG_PRINTEND_FILAMENT[8][26] PROGMEM = {
	"ʹ����˿:",
	"Using Filament:",
 	"�ե�����Ȥ�ʹ��",
	"Utilizando filamento",
    "Utilisation du filament:",
    "Filamentverbrauch:",
    "Utilizzo del filamento:",
    "Gebruikt Filament:"
};

const char MMSG_PRINTEND_AGAIN[8][21] PROGMEM = {
	"  �ٴδ�ӡ",
	" Print Again",
 	" �⤦һ��ӡˢ",
	"Imprimir de nuevo",
    "Imprimer �� nouveau",
    " erneut drucken",
    "Stampa di nuovo",
    " Print Opnieuw"
};

const char MMSG_POWEROFF_TITLE[8][46] PROGMEM = {
	"׼���ػ�",
	"Prepare Poweroff",
 	"�Դ���դ�ʂ䤹��",
	"Preparar el apagado",
    "Pr��parer la mise hors tension",
    "Druckerabschaltung (Poweroff) vorbereiten",
    "Preparare lo spegnimento",
    "Uitzetten Voorbereiden"
};

const char MMSG_POWEROFF_LINE1[8][55] PROGMEM = {
	"����׼���رմ�ӡ��.",
	"Preparing to turn off the printer.",
 	"�ץ�󥿤��Դ���Ф�ʂ�򤷤Ƥ��ޤ�.",
	"Preparando para apagar la impresora.",
    "Pr��paration de la mise hors tension de l'imprimante.",
    "Bereite Abschaltung des Druckers vor",
    "Preparazione per spegnere la stampante.",
    "Voorbereiden om de printer uit te zetten"
};

const char MMSG_POWEROFF_LINE2[8][45] PROGMEM = {
	"ʣ��ʱ��:",
	"Remaining time:",
 	"�Ф�r�g:",
	"Tiempo restante:",
    "Temps restant:",
    "verbleibende Zeit bis zur Abschaltung:",
    "Tempo rimanente:",
    "Resterende Tijd:"
};

const char MMSG_RESTORE_SETTING_LINE[8][99] PROGMEM = {
	"\r\n\r\n  ȷ��Ҫ�ָ�����������?",
	"\r\n\r\n  Are you sure to restore the factory settings?",
 	"\r\n\r\n  �������ɕr���O���ˑ����ޤ���?",
	"\r\n\r\n Est��s seguro de restaurar a la predeterminada?",
    "\r\n\r\n Etes-vous sur de vouloir restaurer les param��tres d'usine?",
    "\r\n\r\n  Sind Sie sicher, dass Sie den Drucker auf Werkseinstellungen zur��cksetzen mochten?",
    "\r\n\r\n Sei sicuro di ripristinare le impostazioni di fabbrica?",
    "\r\n\r\nBen je zeker dat je de fabrieksinstellingen wilt terugzetten?"
};

const char MMSG_SPEED_SETTING_TITLE[8][40] PROGMEM = {
	"��ӡ�ٶ�����",
	"Print Speed Setting",
 	"ӡˢ�ٶ��O��",
	"Ajuste de velocidad",
    "R��glage de la vitesse d'impression",
    "Einstellung der Druckgeschwindigkeit",
    "Impostazione della velocit�� di stampa",
    "Print Snelheid Instelling"
};

const char MMSG_POWER_SAVE_TITLE[8][70] PROGMEM = {
	"�Զ��رյ�Դ����",
	"Auto Power Off Setting",
 	"���`�ȥѥ�`�����O��",
	"Ajuste de apagado autom��tico",
    "R��glage de la mise hors tension automatique",
    "Einstellung zur automatischen Druckerabschaltung (Auto Power Off)",
    "Impostazione spegnimento automatico",
    "Auto Power Off Instelling"
};

const char MMSG_POWEROFF_VALUE1[8][15] PROGMEM = {
	"   �ر�",
	"  Disable",
 	"  �]����",
	" Inhabilitar",
    " D��sactiver",
    " Deaktiviert",
    " disattivare",
    "Uitgeschakeld"
};

const char MMSG_POWEROFF_VALUE2[8][12] PROGMEM = {
	"  1����",
	"  1 min",
 	"  1��",
	" 1 minuto",
    " 1 minute",
    "  1 Min.",
    " 1 minuto",
    "  1 min"
};

const char MMSG_POWEROFF_VALUE3[8][12] PROGMEM = {
	"  5����",
	"  5 min",
 	"  5��",
	"5 minutos",
    "5 minutes",
    "  5 Min.",
    "5 minuti",
    "  5 min"
};

const char MMSG_POWEROFF_VALUE4[8][12] PROGMEM = {
	"  10����",
	"  10 min",
 	"  10��",
	"10 minutos",
    "10 minutes",
    "  10 Min.",
    "10 minuti",
    "  10 min"
};

const char MMSG_POWEROFF_VALUE5[8][12] PROGMEM = {
	"  15����",
	"  15 min",
 	"  15��",
	"15 minutos",
    "15 minutes",
    "  15 Min.",
    "15 minuti",
    "  15 min"
};

const char MMSG_POWEROFF_VALUE6[8][12] PROGMEM = {
	"  30����",
	"  30 min",
 	"  30��",
	"30 minutos",
    "30 minutes",
    "  30 Min.",
    "30 minuti",
    "  30 min"
};

const char MMSG_SELF_TEST_TITLE[8][25] PROGMEM = {
	"�����Լ�",
	"Post",
 	"����եƥ���",
	"Autoprueba de encendido",
    "Publier",
    "Druckerselbstest (POST)",
    "Inviare",
    "Zelftest"
};

const char MMSG_SKIP[8][16] PROGMEM = {
	"  ����",
	"  Skip",
 	" �����å�",
	"  Saltar",
    "  Sauter",
    "Uberspringen",
    "  Salta",
    " Overslaan"
};

const char MMSG_SELF_TEST_ITEM1[8][35] PROGMEM = {
	"����ͷ����:",
	"Left Nozzle Heating:",
 	"��Υ���ӟ�:",
	"Boquilla izquierda:",
	"Buse gauche Chauffage:",
	"Aufheizen der linken D��se:",
	"CloLeft ugello di riscaldamento:",
    "Linker Printkop Opwarmen:"
};

const char MMSG_SELF_TEST_ITEM2[8][35] PROGMEM = {
	"����ͷ����:",
	"Right Nozzle Heating:",
 	"�ҥΥ���ӟ�:",
	"Boquilla derecha:",
	"Buse droite chauffage:",
	"Aufheizen der rechten D��se:",
	"Riscaldamento dell'ugello destro:",
    "Rechter Printkop Opwarmen:"
};

const char MMSG_SELF_TEST_ITEM3[8][32] PROGMEM = {
	"ƽ̨����:",
	"Bed Heating:",
 	"�٥å�ů��:",
	"Plataforma",
    "Chauffage du lit:",
    "Aufheizen des Druckbettes:",
    "Letto riscaldamento:",
    "Bed Opwarmen:"
};

const char MMSG_SELF_TEST_ITEM4[8][26] PROGMEM = {
	"X���λ:",
	"X Axis Homing:",
 	"X�S�۩`�ߥ�:",
	"X Axis Homing:",
    "X Homing:",
    "Grundstellung X-Axe:",
    "X Homing:",
    "X As Homing"
};

const char MMSG_SELF_TEST_ITEM5[8][26] PROGMEM = {
	"Y���λ:",
	"Y Axis Homing:",
 	"Y�S�۩`�ߥ�:",
	"Y Axis Homing:",
    "Et Homing:",
    "Grundstellung Y-Axe:",
    "E Homing:",
    "Y As Homing"
};

const char MMSG_SELF_TEST_ITEM6[8][26] PROGMEM = {
	"Z���λ:",
	"Z Axis Homing:",
 	"Z�S�۩`�ߥ�:",
	"Z Axis Homing:",
    "Z Homing:",
    "Grundstellung Z-Axe:",
    "Z Homing:",
    "Z As Homing"
};

const char MMSG_SELF_TEST_PASS[8][11] PROGMEM = {
	"����",
	"PASS",
 	"�ϸ�",
	"PASAR",
    "PASSER",
    "PASS",
    "PASSAGGIO",
    "Geslaagd"
};

const char MMSG_SELF_TEST_NOTEMP[8][41] PROGMEM = {
	"�޷���ȡ�¶�!",
	"Temperature can't be read!",
 	"�¶Ȥ��i��ȡ��ޤ���!",
	"Error de temperatura",
    "La temp��rature ne peut pas ��tre lue!",
    "Temperatur kann nicht ermittelt werden!",
    "La temperatura non pu�� essere letta!",
    "Temperatuur kan niet worden afgelezen!"
};

const char MMSG_SELF_TEST_NOHEAT[8][26] PROGMEM = {
	"����ʧ��!",
	"Heating fail!",
 	"�ӟ�ʧ��!",
	"Falla de calentamiento",
    "Echec du chauffage!",
    "Aufheizen fehlerhaft!",
    "Riscaldamento fallito!",
    "Opwarm fout!"
};

const char MMSG_SELF_TEST_HEATING[8][15] PROGMEM = {
	"���ڼ���...",
	"Heating...",
 	"�ӟ�...",
	"Calefacci��n",
    "Chauffage...",
    "Aufheizen...",
    "Riscaldamento",
    "Opwarmen..."
};

const char MMSG_SELF_TEST_RUNOUT_OK[8][17] PROGMEM = {
	"��˿�Ѳ���",
	"Filament OK",
 	"�ե�����Ȓ���",
	"Filamento ok",
    "Filament OK",
    "Filament OK",
    "Filamento OK",
    "Filament OK"
};

const char MMSG_SELF_TEST_RUNOUT_FAIL[8][23] PROGMEM = {
	"δ��⵽��˿",
	"NO Filament",
 	"�磻��`���ʳ�����ʤ�",
	"NO filamento",
    "PAS de filament",
    "Filament fehlt",
    "NESSUN filamento",
    "Geen Filament"
};

const char MMSG_SELF_TEST_MOVING[8][25] PROGMEM = {
	"�����ƶ�...",
	"Moving...",
 	"�ƄӤ��Ƥ��ޤ�...",
	"Emocionante",
    "En mouvement...",
    "bewege Achsen...",
    "In movimento...",
    "Aan het verplaatsen..."
};

const char MMSG_SELF_TEST_NOHOMING[8][16] PROGMEM = {
	"�޷���λ!",
	"Homing Fail!",
 	"�۩`�ߥ�ʧ��!",
	"Homing fallo!",
    "Homing Fail!",
    "Homing Fail!",
    "Homing Fail!",
    "Homing Fout!"
};

const char MMSG_HELP_TITLE[8][11] PROGMEM = {
	"����",
	"Help",
 	"������",
	"Ayuda",
    "Aidez-moi",
    "Hilfe",
    "Aiuto",
    "Help"
};

const char MMSG_HELP_GUIDE[8][18] PROGMEM = {
	"    ʹ����",
	"   Quick Guide",
 	"  �����å�������",
	"   Gu��a r��pida",
    "  Guide rapide",
    " Kurzanleitung",
    "  Guida veloce",
    "  Snelgids"
};

const char MMSG_HELP_FAQ[8][20] PROGMEM = {
	"    ��������",
	"      FAQ",
 	"   �褯�����|��",
	"      FAQ",
    "      FAQ",
    "      FAQ",
    "      FAQ",
    "      FAQ"
};

const char MMSG_HELP_DIAG[8][22] PROGMEM = {
	"    �������",
	"  Error Diagnosis",
 	"  ����`�������",
	"   Diagnostico",
    "   Diagnostic",
    "  Fehlerdiagnose",
    "    Diagnosi",
    "  Fout Diagnose"
};

const char MMSG_HELP_WIKI[8][22] PROGMEM = {
	"    ����Wiki",
	"     Wiki",
 	"     Wiki",
	"     Wiki",
    "     Wiki",
    "     Wiki",
    "     Wiki",
    "     Wiki"
};

const char MMSG_HELP_CONTACT[8][22] PROGMEM = {
	"    ��ϵ����",
	"   Contact Us",
 	"  �������Ϥ碌",
	"    Contacto",
    " Nous contacter",
    "   Kontakt",
    "   Contattaci",
    " Contacteer Ons"
};

const char MMSG_SAVE_PRINTING[8][54] PROGMEM = {
	"���ڱ����ӡ����...",
	"Saving print progress...",
 	"ӡˢ���M��״�r�򱣴椷�Ƥ��ޤ�...",
	"Guardando progreso de impresi��n ...",
    "Enregistrement de la progression de l'impression...",
    "Speichere aktuellen Druckstatus...",
    "Salvataggio avanzamento stampa...",
    "Printvoortgang opslaan..."
};

const char MMSG_RESUME_LINE[8][148] PROGMEM = {
	"\r\n���ֱ������, �Ƿ�ָ���ӡ?",
	"\r\nFound the save progress,\r\nresume printing?",
 	"\r\n������M��״�r���狼��ޤ���,\r\nӡˢ�����_���ޤ���?",
	"\r\nEncontr�� el progreso de guardar,\r\nreanudar la impresi��n?",
    "\r\nTrouv�� la progression de la sauvegarde,\r\nreprendre l'impression?",
    "\r\nDer letzte Druck wurde unterbrochen und der aktuelle Status gespeichert.\r\nWollen Sie den Druck an der gespeicherten Position fortsetzen?",
    "\r\nTrovato l'avanzamento del salvataggio,\r\nriprendere la stampa?",
    "\r\nPrintvoortgang gevonden, verder met printen?"
};

const char MMSG_RESUME_PRINTING[8][46] PROGMEM = {
	"���ڻָ���ӡ����...",
	"Resuming print progress...",
 	"ӡˢ���M��״�r�����_���Ƥ��ޤ�...",
	"Reanudando el progreso de impresi��n",
    "Reprise de la progression de l'impression...",
    "Setze Druck an gespeicherter Position fort...",
    "Ripresa dell'avanzamento della stampa...",
    "Print Hervatten..."
};

const char MMSG_HELPLIST_TITLE[8][13] PROGMEM = {
	"��������",
	"FAQ",
 	"�褯�����|��",
	"FAQ",
    "FAQ",
    "FAQ",
    "FAQ",
    "FAQ"
};

const char MMSG_PRINTING_NOTICE[8][116] PROGMEM = { 
	"\r\n\r\n ����ͣ���ٽ��в���",
	"\r\n\r\n Please pause before proceeding",
    "\r\n\r\n �A�Ф���ǰ��һ�rֹͣ���Ƥ�������",
	"\r\n\r\n Pausa antes de continuar",
    "\r\n\r\n Veuillez faire une pause avant de continuer",
    "\r\n Diese Funktion ist wahrend eines Druckes nicht moglich. Sie m��ssen den Druck erst pausieren oder beenden!",
    "\r\n\r\n Metti in pausa prima di procedere",
    "\r\n\r\nGraag pauseren alvorens verder te gaan"
};

const char MMSG_LEVEL_HIGHT_TITLE[8][40] PROGMEM = {
	"ѡ��Z��߶� ",
	"Select the Z axis height",
	"�ե�����ȤηN�",
	"Seleccione la altura del eje Z",
    "S��lectionnez la hauteur de l'axe Z",
    "Select the Z axis height",
    "Seleziona l'altezza dell'asse Z.",
    "Selecteer de Z as hoogte"
};

const char MMSG_FIRMWARE_PARAM_TITLE[8][30] PROGMEM = {
	"�̼�����",
	"Firmware Parameters",
	"�ե��`�०�����ѥ��`���`",
	"Par��metros del firmware",
    "Param��tres du micrologiciel",
    "Firmware Parameter",
    "Parametri firmware",
    "Firmware Instellingen"
};

const char MMSG_FIRMWARE_PARAM_OPERATION[8][25] PROGMEM = {
	"�����ָ�",
	"Save&Load",
	"����ޤ��Ϗ�Ԫ",
	"Guardar o restaurar",
    "Sauvegarder charger",
    "Datei Speichern&Laden",
    "Salva e carica",
    "Opslaan&Openen"
};

const char MMSG_FIRMWARE_PARAM_SAVE[8][23] PROGMEM = {
	"  ������TF��",
	"  Save to TF",
	" TF���`�ɤ˱���",
	"  Guardar en TF",
    "Enregistrer sur TF",
    "Auf MicroSD speichern",
    "  Salva in TF",
    " Opslaan naar TF"
};

const char MMSG_FIRMWARE_PARAM_LOAD[8][20] PROGMEM = {
	"  ��TF���ָ�",
	"  Load from TF",
	" TF���`�ɤ���؏�",
	" Cargar desde TF",
    "Charger depuis TF",
    "Von MicroSD laden",
    "  Carica da TF",
    " Openen vanaf TF"
};

const char MMSG_FIRMWARE_PARAM_RESTORE[8][20] PROGMEM = {
	"  �ָ���������",
	"  Load Default",
	"   �����ꥻ�å�",
	"  Recuperaci��n",
    "Charge par d��faut",
    " Standard laden",
    "Carica predefinito",
    " Laad standaard"
};

const char MMSG_PREVIEW_TITLE[8][30] PROGMEM = {
	"�ļ���Ϣ",
	"File Information",
 	"�ե��������",
	"Informacion del archivo",
    "Informations sur le fichier",
    "Dateiinformationen",
    "Informazioni sui file",
    "Bestand Informatie"
};

const char MMSG_PREVIEW_PRINT[8][13] PROGMEM = {
	"  ��ӡ",		
	"  Print",
	"  ӡˢ����",
	" Impresi��n",
    " Impression",
    "   Druck",
    "  Stampa",
    "  Print"
};


const char MMSG_FILAMENT_CHOICE_EXTRUDER_TITLE[8][24] PROGMEM = {
	"ѡ����ͷ",
	"Select Nozzle",
    "�Υ�����x�k",
	"Seleccionar boquilla",
    "S��lectionnez la buse",
    "Wahle D��se",
    "Seleziona Ugello",
    "Selecteer Printkop"
};

const char MMSG_FILAMENT_LEFT_EXTRUDER[8][30] PROGMEM = {
	"    ����ͷ",
	"  Left Nozzle",
    "    ��Υ���",
	" Boquilla izquierda",
    "  Buse gauche",
    "  Linke D��se",
    "  Ugello sinistro",
    " Linker Printkop"
};

const char MMSG_FILAMENT_RIGHT_EXTRUDER[8][30] PROGMEM = {
	"    ����ͷ",
	"  Right Nozzle",
    "    �ҥΥ���",
	" Boquilla derecha",
    "  Buse droite",
    "  Rechte D��se",
    "  Ugello destro",
    " Rechter Printkop"
};

const char MMSG_STOPPED[] PROGMEM = { "STOPPED. " };
const char MMSG_ERR_Z_HOMING[] PROGMEM = { "Home XY first" };
const char MMSG_ZPROBE_OUT[] PROGMEM = { "Z Probe past bed" };

const char MMSG_CONFIG_OPEN_FAIL[8][70]PROGMEM = {
	"�޷��򿪲��������ļ�.",		
	"Open config save file fail.",
	"���ɱ���ե�������_�����Ȥ��Ǥ��ޤ���.",
	"El archivo de configuraci��n de guardado abierto falla.",
    "Echec de l'ouverture du fichier de sauvegarde de la configuration.",
    "Konnte Konfigurationsdatei nicht laden.",
    "Apertura del file di salvataggio della configurazione non riuscita.",
    "Fout met openen configuratie bestand."
};

const char MMSG_CONFIG_WRITE_FAIL[8][72]PROGMEM = {
	"�޷�д����������ļ�.",		
	"Write to config save file fail.",
	"���ɱ���ե�����ؤΕ����z�ߤ�ʧ�����ޤ���.",
	"Escribir en el archivo de configuraci��n de guardar falla.",
    "Echec de l'��criture dans le fichier de sauvegarde de la configuration.",
    "Konnte Konfigurationsdatei nicht speichern.",
    "Scrittura nel file di salvataggio della configurazione non riuscita.",
    "Fout met bewaren configuratie bestand."
};

const char MMSG_CONFIG_SAVE_OK[8][40]PROGMEM = {
	"��������ɹ�.",		
	"Parameters saved successfully.",
	"�ѥ��`���������˱��椵��ޤ���.",
	"Par��metros guardados con ��xito.",
    "Param��tres enregistr��s avec succ��s.",
    "Parameter erfolgreich gespeichert.",
    "Parametri salvati con successo.",
    "Instellingen succesvol opgeslagen."
};

const char MMSG_CONFIG_LOAD_OK[8][54]PROGMEM = {
	"�ָ������ɹ�.",		
	"Parameter recovery succeeded.",
	"�ѥ��`���Ώ�Ԫ�˳ɹ����ޤ�����",
	"La recuperaci��n de par��metros tuvo ��xito.",
    "La r��cup��ration des param��tres a r��ussi.",
    "Parameter erfolgreich geladen.",
    "Il ripristino dei parametri �� riuscito.",
    "Instellingen herstel geslaagd."
};

const char MMSG_STORE_TITLE[8][19]PROGMEM = {
	"�洢��",		
	"Disk",
	"�ǥ�����",
	"Disco",
    "Disque",
    "Speichermedium",
    "Disco",
    "Schijf"
};

const char MMSG_STORE_TF[8][16]PROGMEM = {
	"     TF��",		
	"    TF Card",
	"    TF���`��",
	"   Tarjeta TF",
    "    Carte TF",
    "    MicroSD",
    "  Carta di TF",
    "   TF kaart"
};

const char MMSG_STORE_WIFIDISK[8][18]PROGMEM = {
	"     WIFI��",		
	"    WIFI Disk",
	"   WIFI�ǥ�����",
	"   Disco WIFI",
    "   Disque WIFI",
    "    WIFI Disk",
    "   Disco WIFI",
    "   WiFi kaart"
};

const char MMSG_LOADING[8][44] PROGMEM = {
	"\r\n\r\n ��������, ���Ե�...",
	"\r\n\r\n Loading, please wait...",
 	"\r\n\r\n �i���z����...���ä��¤���...",
	"\r\n\r\n Cargando por favor espere...",
    "\r\n\r\n Chargement, veuillez patienter...",
    "\r\n\r\n Lade, bitte warten...",
    "\r\n\r\n Attendere il caricamento prego...",
    "\r\n\r\nLaden, even moment geduld..."
};

const char MMSG_IAP_TITLE[8][28] PROGMEM = {
	"�����̼�",
	"Update",
	"���¤���",
	"Actualizaci��n",
    "Mettre �� jour",
    "Aktualisierung (Update)",
    "Aggiornare",
    "Update"
};

const char MMSG_IAP_TIP[8][156] PROGMEM = {
	"������̼���֧�����߸���",
	"Community firmware not support IAP",
	"�ե��`�०�������¥ե�����flash.wfm��TF���`�ɤΥ�`�ȥǥ��쥯�ȥ�˥��ԩ`���Ƥ�������.\r\n[�٥���]�򥯥�å����Ƹ��¤��ޤ�.",
	"Copie el archivo de actualizaci��n de firmware flash.wfm en el directorio ra��z de la tarjeta TF.\r\nHaga clic en Comenzar para actualizar.",
    "Veuillez copier le fichier de mise �� jour du micrologiciel flash.wfm dans le r��pertoire racine de la carte TF.\r\nCliquez sur Commencer �� mettre �� jour.",
    "Bitte kopieren Sie  die Firmwaredatei flash.wfm in das Stammverzeichnis der MicroSD-Karte.\r\nUm das Update zu beginnen klicken Sie auf Start",
    "Copiare il file di aggiornamento del firmware flash.wfm nella directory principale della scheda TF.\r\nFare clic su Inizia ad aggiornare.",
    "Kopieer het firmware update bestand flash.wfm naar de root directory van de TF kaart. \r\nKlik op Start om de update uit te voeren."
};

const char MMSG_IAP_CHECK_FILE[8][33] PROGMEM = {
	"���ڼ���ļ�...",
	"Checking file...",
	"�ե����������å����Ƥ��ޤ�...",
	"Comprobando archivo ...",
    "V��rification du fichier...",
    "Pr��fe Datei...",
    "Controllo file in corso...",
    "Bestand controlleren..."
};

const char MMSG_IAP_FILE_FOUND[8][27] PROGMEM = {
	"���ҵ�flash.wfm",
	"flash.wfm found",
	"flash.wfm��Ҋ�Ĥ���ޤ���",
	"flash.wfm encontrado",
    "flash.wfm trouv��",
    "flash.wfm gefunden",
    "flash.wfm trovato",
    "flash.wmf gevonden"
};

const char MMSG_IAP_FILE_NOTFOUND[8][35] PROGMEM = {
	"����: δ�ҵ�flash.wfm",
	"Error: flash.wfm not found",
	"����`��flash.wfm��Ҋ�Ĥ���ޤ���",
	"Error: flash.wfm no encontrado",
    "Erreur: flash.wfm introuvable",
    "Fehler: flash.wfm nicht gefunden",
    "Errore: flash.wfm non trovato",
    "Fout: flash.wfm niet gevonden"
};

const char MMSG_IAP_CHECK_VERSION[8][33] PROGMEM = {
	"���ڼ��汾...",
	"Checking version...",
	"�Щ`������_�J���Ƥ��ޤ�...",
	"Comprobando versi��n...",
    "V��rification de la version...",
    "Pr��fe Version...",
    "Verifica versione...",
    "Versie controle..."
};

const char MMSG_IAP_FILE_NOTOPEN[8][45] PROGMEM = {
	"�޷���flash.wfm",
	"Error: cannot read flash.wfm",
	"����`��flash.wfm���i��ȡ��ޤ���",
	"Error: no se puede leer flash.wfm",
    "Erreur: impossible de lire flash.wfm",
    "Fehler: flash.wfm kann nicht gelesen werden",
    "Errore: impossibile leggere flash.wfm",
    "Fout: kan flash.wfm niet lezen"
};

const char MMSG_IAP_FILE_NOINFO[8][60] PROGMEM = {
	"�޷���ȡ�汾��Ϣ",
	"Error: unable to read version info",
	"����`���Щ`����������i��ȡ��ޤ���",
	"Error: no se puede leer la informaci��n de la versi��n",
    "Erreur: impossible de lire les informations de version",
    "Fehler: Die Versionsinformation kann nicht gelesen werden",
    "Errore: impossibile leggere le informazioni sulla versione",
    "Fout: kan versie info niet lezen"
};

const char MMSG_IAP_FILE_INFO[8][38] PROGMEM = {
	"�����ļ��汾:",
	"Update file version:",
	"�ե�����Щ`�����θ��£�",
	"Actualizar la versi��n del archivo:",
    "Mettre �� jour la version du fichier:",
    "Update Version:",
    "Aggiorna la versione del file:",
    "Update bestand versie:"
};

const char MMSG_IAP_DEVICE_INFO[8][20] PROGMEM = {
	"��ǰ�汾:",
	"Current version:",
	"�F�а棺",
	"Versi��n actual:",
    "Version actuelle:",
    "Aktuelle Version:",
    "Versione attuale:",
    "Huidige versie:"
};

const char MMSG_IAP_BEGIN[8][48] PROGMEM = {
	"�ȴ���ʼ����...",
	"Waiting for the update to begin...",
	"���¤�ʼ�ޤ�Τ���äƤ��ޤ�...",
	"Esperando a que comience la actualizaci��n...",
    "En attente du d��but de la mise �� jour...",
    "Warte auf Start des Updates...",
    "In attesa dell'inizio dell'aggiornamento...",
    "Wacht op starten update..."
};

const char MMSG_IAP_NONEED[8][38] PROGMEM = {
	"������̼���֧�����߸���",
	"Community firmware not support IAP",
	"���¤����Ҫ�Ϥ���ޤ���",
	"No es necesario actualizar",
    "Pas besoin de mettre �� jour",
    "Nichts zu aktualisieren",
    "Non c'�� bisogno di aggiornare",
    "Update niet nodig"
};

const char MMSG_IAP_FILE_DEVICE[8][45] PROGMEM = {
	"�����ļ�����:",
	"Update file device:",
	"�ե�����ǥХ����θ��£�",
	"Actualizar dispositivo de archivo:",
    "Mettre �� jour le p��riph��rique de fichier:",
    "Gerat lt. Update:",
    "Aggiorna dispositivo file:",
    "Update bestand apparaat:"
};

const char MMSG_IAP_CURRENT_DEVICE[8][24] PROGMEM = {
	"��ǰ�豸:",
	"Current device:",
	"�F�ڤΥǥХ�����",
	"Dispositivo actual:",
    "Appareil actuel:",
    "Aktuelles Gerat:",
    "Dispositivo corrente:",
    "Huidig apparaat:"
};

const char MMSG_IAP_DEVICE_NOMATCH[8][40] PROGMEM = {
	"����: ���Ͳ�ƥ��",
	"Error: Device not match",
	"����`���ǥХ�����һ�¤��ޤ���",
	"Error: el dispositivo no coincide",
    "Erreur: l'appareil ne correspond pas",
    "Fehler: Gerate stimmen nicht ��berein",
    "Errore: dispositivo non corrispondente",
    "Fout: Apparaat komt niet overeen"
};

const char MMSG_IAP_SIZE_ERROR[8][42] PROGMEM = {
	"�ļ���С����",
	"Error: Wrong file size",
	"����`���ե����륵�������g�`�äƤ��ޤ�",
	"Error: tamaeo de archivo incorrecto",
    "Erreur: taille de fichier incorrecte",
    "Fehler: Dateigrobe fehlerhaft",
    "Errore: dimensione del file errata",
    "Fout: Verkeerde bestandsgrootte"
};

const char MMSG_WIKI_TITLE[8][22] PROGMEM = {
	"Wiki��վ",
	"Wiki site",
 	"Wiki������",
	"Sitio Wiki",
    "Site Wiki",
    "Wiki-Site",
    "Sito Wiki",
    "Wiki site"
};

const char MMSG_WIKI_URL[] PROGMEM = {
    "www.weedo3dprinter.com"
};

const char MMSG_CONTACT_TITLE[8][22] PROGMEM = {
	"��ϵ����",
	"Contact Us",
 	"�������Ϥ碌",
	"Cont��ctenos",
    "Nous contacter",
    "Kontakt",
    "Contattaci",
    "Contacteer Ons"
};

const char MMSG_CONTACT_TEXT[8][160] PROGMEM = {
    "��Ʒ����: www.weedo.ltd\r\nWiki��վ: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\n�ۺ�����: support@wiibooxtech.com",
    "website: www.weedo.ltd\r\nwikisite: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\nemail: support@wiibooxtech.com",
    "�����֥�����: www.weedo.ltd\r\nwiki������: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\nE��`��: support@wiibooxtech.com",
    "sitio web: www.weedo.ltd\r\nsitio wiki: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\ncorreo electr��nico: support@wiibooxtech.com",
    "site Web: www.weedo.ltd\r\nwikisite: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\ncourriel: support@wiibooxtech.com",
    "Website: www.weedo.ltd\r\nwikisite: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\nE-Mail: support@wiibooxtech.com",
    "sito web: www.weedo.ltd\r\nwikisite: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\ne-mail: support@wiibooxtech.com",
    "website: www.weedo.ltd\r\nwikisite: www.weedo3dprinter.com\r\nfacebook: www.facebook.com/Weedo3d\r\nemail: support@wiibooxtech.com\r\n"
};


const char MMSG_PREVIEW_MODE[8][20] PROGMEM = {
	"˫��ͷģʽ",
	"Dual Mode",
 	"�ǥ奢���`��",
	"Modo dual",
    "Mode double",
    "Druckmodus",
    "Modalit�� doppia",
    "Dual Modus"
};

const char MMSG_DUAL_NORMAL[8][20] PROGMEM = {
	"    ��ͨģʽ",
	"    Normal",
 	"  �Ω`�ޥ��`��",
	"    Normal",
    "   Ordinaire",
    "    Normal",
    "    Normale",
    "    Normaal"
};

const char MMSG_DUAL_COPY[8][20] PROGMEM = {
	"    ����ģʽ",
	"    Duplication",
 	"   ���ԩ`��`��",
	"    Duplicaci��n",
    "   Reproduction",
    "    Duplizieren",
    "   Duplicazione",
    "    Dupliceren"
};

const char MMSG_DUAL_MIRROR[8][20] PROGMEM = {
	"    ����ģʽ",
	"    Mirrored",
 	"   �ߥ�`��`��",
	"    Reflejado",
    "    Miroir",
    "    Spiegeln",
    "   Rispecchiato",
    "    Spiegelen"
};

const char MMSG_LEVEL_DATA_TITLE[8][36] PROGMEM = {
	"ƽ��Ȳ��Խ��",
	"Flatness Test Result",
 	"ƽ��ȥƥ��ȽY��",
	"Resultado de la prueba de planitud",
    "R��sultat du test de plan��it��",
    "Ergebnis des Bettleveltests",
    "Risultato del test di planarit��",
    "Vlakheid Test Resultaat"
};

const char MMSG_LEVEL_DATA_TEXT[8][138] PROGMEM = {
	"�������ݽ����ο�\r\n�Զ���ƽ���ܿ����Զ�����ƽ������",
	"Test data is for reference only.\r\nThe auto bed leveling can compensate for flatness errors.",
 	"�ƥ��ȥǩ`���ϲο��äǤ�\r\n�Ԅӥ�٥�󥰙C�ܤϡ�ƽ̹�ȥ���`���ԄӵĤ��a���Ǥ��ޤ�",
	"La nivelaci��n autom��tica de la cama puede compensar los errores de planitud.",
    "Les donn��es de test sont �� titre indicatif uniquement.\r\nLa mise �� niveau automatique du lit peut compenser les erreurs de plan��it��.",
    "Die Testdaten dienen nur zur Orientierung.\r\nDas automatische Bettleveling kann vorhandene Fehler ausgleichen.",
    "I dati del test sono solo di riferimento.\r\nIl livellamento automatico del letto pu�� compensare gli errori di planarit��.",
    "Test resultaat dient enkel als referentie.\r\nDe auto bed leveling compenseert de gevonden afwijkingen."
};

const char MMSG_FITNESS_ERROR_TITLE[8][38] PROGMEM = {
	"ƽ��ȴ��󾯸�",
	"Flatness Error Warning",
 	"ƽ��ȥ���`����",
	"Advertencia de error de planitud",
    "Avertissement d'erreur de plan��it��",
    "Druckbettlevelwarnung",
    "Avviso di errore di planarit��",
    "Vlakheid Fout Waarschuwing"
};

const char MMSG_FITNESS_ERROR_TEXT[8][126] PROGMEM = {
	"ƽ���������,������ӡ�����豸\r\n����ȡ����ӡ.",
	"The flatness error, continuing to print will damage the printer. It is recommended to cancel the printing.",
 	"ƽ��ȥ���`���󤭤����뤿��,ӡˢ��A�Ф���ȥǥХ������p�����ޤ�. ӡˢ�򥭥�󥻥뤹�뤳�Ȥ򤪄�ᤷ�ޤ�.",
	"El error de planitud, continuar imprimiendo daear�� la impresora. Se recomienda cancelar la impresi��n.",
    "L'erreur de plan��it��, la poursuite de l'impression endommagera l'imprimante. Il est recommand�� d'annuler l'impression.",
    "Das Druckbett ist uneben, wenn Sie weiterdrucken kann der Drucker Schaden nehmen. Es wird empfohlen den Druck abzubrechen!",
    "L'errore di planarit��, continuando a stampare, dannegger�� la stampante. Si consiglia di annullare la stampa.",
    "Vlakheid fout, het wordt aangeraden het printen te stoppen. Verdergaan kan de printer beschadigen."
};


const char MMSG_NOZZLE_OFFSET[8][20] PROGMEM = {
	"   ˫��ͷƫ��",
	"  Nozzle Offset",
 	" �Υ��륪�ե��å�",
	"   Compensar",
    "   buse Offset",
    "  D��senversatz",
    "  Offset ugello",
    "Printkop Afstand"
};

const char MMSG_NOZZLE_OFFSET_TITLE[8][38] PROGMEM = {
	"˫��ͷƫ�õ���",
 	"Nozzle Offset Adjustment",
    "���֥�Υ��륪�ե��å��{��",
	"Desplazamiento de la boquilla",
    "R��glage du d��calage de la buse",
    "D��senversatzjustierung (Offset)",
    "Regolazione dell'offset degli ugelli",
    "Printkop Afstand Aanpassing"
};

const char MMSG_NOZZLE_X_OFFSET[8][20] PROGMEM = {
	"  XYƫ�ôֵ�",
 	" XY Coarse Tune",
	"XY���ե��åȴ��{��",
	"XY Melod��a Gruesa",
    "XY gros morceau",
    "XY Grobabstimmung",
    "XY Coarse Tune",
    "XY Grove Afstelling"
};

const char MMSG_NOZZLE_XY_OFFSET[8][20] PROGMEM = {
	"  XYƫ�þ���",
 	"  XY Fine Tune",
	"XY���ե��å�΢�{��",
	" Ajuste fino XY",
    " R��glage fin XY",
    "XY Feineinstellung",
    "  XY Fine Tune",
    "XY Fijne Afstelling"
};

const char MMSG_NOZZLE_Z_OFFSET[8][20] PROGMEM = {
	"   Zƫ�õ���",
 	" Z Offset Tune",
	" Z���ե��å��{��",
	" Z Offset Tune",
    " Z Offset Tune",
    " Z Einstellung",
    " Z Offset Tune",
    "Z Marge Afstelling"
};

const char MMSG_NOZZLE_X_TITLE[8][55] PROGMEM = {
	"��ͷXYƫ�ôֵ�",
 	"Nozzle XY Offset Coarse Tune",
	"�Υ���XY���ե��åȴ��{��",
	"Boquilla XY Offset Coarse Tune",
    "R��glage grossier d��cal�� de la buse XY",
    "D��sen XY-Versatz (Offset) Grobeinstellung",
    "Regolazione approssimativa dell'offset dell'ugello XY.",
    "Printkop XY Afstand"
};

const char MMSG_NOZZLE_X_TEXT[8][190] PROGMEM = {
	"��ӡ�ļ�NozzleCoarseTune.gcode\r\nѡ��ˮƽ��������ƫ����С�Ĳ��Կ��ϵ�����, �����һ��.",
	"Print the file NozzleCoarseTune.gcode\r\nSelect the number on the block with the smallest horizontal deviation, and click Next.",
 	"�ե�����NozzleCoarseTune.gcode�ե������ӡˢ���ޤ�\r\n2�ĤΥ쥤��`��ˮƽ�����ƫ����С�����ƥ��ȥ֥�å��η��Ť��x�k��,[�Τ�]�򥯥�å����ޤ�.",
	"Imprima el archivo Nozzle CourseTune.gcode. Seleccione el n��mero en el bloque con la desviaci��n horizontal m��s pequena y haga clic en Siguiente.",
    "Imprimez le fichier NozzleCoarseTune.gcode\r\nS��lectionnez le num��ro sur le bloc avec le plus petit ��cart horizontal et cliquez sur Suivant.",
    "Drucken Sie die Datei NozzleCoarseTune.gcode\r\nWahlen Sie anschliebend die Nummer des Blocks mit der geringsten horizontalen Abweichung und klicken Sie auf Fortfahren.",
    "Stampa il file NozzleCoarseTune.gcode\r\nSelezionare il numero sul blocco con la deviazione orizzontale pi�� piccola e fare clic su Avanti.",
    "Print het bestand NozzleCoarseTune.gcode.\r\nSelecteer het nummer van het blokje met de kleinste horizontale afwijking en klik op Volgende."
};

const char MMSG_NOZZLE_XY_TITLE[8][46] PROGMEM = {
	"��ͷXYƫ�þ���",
 	"Nozzle XY Offset Fine Tune",
	"ӡ�֥إå�XY���ե��å�΢�{��",
	"Boquilla XY Offset Fine Tune",
    "R��glage pr��cis du d��calage XY de la buse",
    "D��sen XY-Versatz (Offset) Feineinstellung",
    "Regolazione fine offset XY ugello",
    "Printkop XY Afstand Fijne Afstelling"
};

const char MMSG_NOZZLE_Y1_TEXT[8][180] PROGMEM = {
	"��ӡ�ļ�NozzleFintTune.gcode\r\nѡ��ˮƽ��������ƫ����С�Ĳ��Կ��ϵ�����, �����һ��.",
	"Print the file NozzleFintTune.gcode. Select the number on the block with the smallest horizontal deviation, and click Next.",
 	"NozzleFintTune.gcode�ե������ӡˢ���ޤ�\r\n2�ĤΥ쥤��`��ˮƽ�����ƫ����С�����ƥ��ȥ֥�å��η��Ť��x�k��,[�Τ�]�򥯥�å����ޤ�.",
	"Imprima el archivo NozzleFintTune.gcode. Seleccione el n��mero en el bloque con la desviaci��n horizontal m��s pequena y haga clic en Siguiente.",
    "Imprimez le fichier NozzleFintTune.gcode. S��lectionnez le num��ro sur le bloc avec le plus petit ��cart horizontal et cliquez sur Suivant.",
    "Drucken Sie die Datei NozzleFintTune.gcode. Wahlen Sie anschliebend die Nummer des Blocks mit der geringsten horizontalen Abweichung und klicken Sie auf Fortfahren.",
    "Stampa il file NozzleFintTune.gcode. Selezionare il numero sul blocco con la deviazione orizzontale pi�� piccola e fare clic su Avanti.",
    "Print het bestand NozzleFineTune.gcode. Selecteer het nummer van het blokje met de kleinste horizontale afwijking en klik op Volgende."
};

const char MMSG_NOZZLE_Y2_TEXT[8][150] PROGMEM = {
	"ѡ��ֱ��������ƫ����С�Ĳ��Կ��ϵ�����, ��������������.",
	"Select the number on the block with the smallest deviation between the two vertical layers, and Save.",
 	"2�Ĥδ�ֱ�쥤��`�g��ƫ����С�����ƥ��ȥ֥�å��η��Ť��x�k��, [����]�򥯥�å������O�������ˤ��ޤ�.",
	"Seleccione el n��mero en el bloque con la desviaci��n m��s pequena entre las dos capas verticales y Guardar.",
    "S��lectionnez le num��ro sur le bloc pr��sentant le plus petit ��cart entre les deux couches verticales et enregistrez.",
    "Wahlen Sie die Nummer des Blocks mit der geringsten Abweichung zwischen den beiden vertikalen Schichten und klicken Sie auf Speichern.",
    "Seleziona il numero sul blocco con la deviazione pi�� piccola tra i due strati verticali e Salva.",
    "Selecteer het nummer van het blokje met de kleinste afwijking tussen de twee vertikale lagen en kies Opslaan."
};

const char MMSG_NOZZLE_Z_TITLE[8][40] PROGMEM = {
	"��ͷZƫ�õ���",
 	"Nozzle Z Offset Tune",
	"�Υ���Z���ե��å��{��",
	"Boquilla Z Offset Tune",
    "R��glage du d��calage de la buse Z",
    "D��sen Z-Versatz (Offset) Einstellung",
    "Regolazione offset Z ugello",
    "Printkop Z Afstand Afstelling"
};

const char MMSG_NOZZLE_Z_TEXT1[8][320] PROGMEM = {
	"�ڿ�ʼУ׼ǰ, ������������ͷ��������˿, �������ͷ�¼����Ķ�����˿. ����ͷ��ȴ���ɿ�����ͷ�Ҳ�̶�����, ����ͷ����������˺���������. Ȼ��׼��һ�Ű�ֽ����ƽ̨֮��.\r\n׼���ú�����ʼ.",
	"Before calibration, please load the filaments in the double nozzles, and then clean the nozzles. After the nozzle has cooled down, loosen thefixed meter on the right side of  the nozzles, push the nozzles up tothe top and lock the meter. Prepare a paper on the bed.",
	"�����֥�`������ǰ��, �ե�����Ȥ���֥�Υ���˥�`�ɤ��Ƥ���, �Υ������ߤ��Ƥ�������. �Υ��뤬�䤨����, �Υ����҂Ȥι̶���`���`�򾏤�, �Υ�����Ϥ�Ѻ���Ϥ��ƥ�`���`���å����ޤ�. �٥åɤ��Ϥ˼������⤷�ޤ�. ���٤ƤΜʂ䤬�Ǥ�����, [�_ʼ]�򥯥�å����ޤ�.",
	"Antes de la calibraci��n, cargue los filamentos en las boquillas dobles y luego limpie las boquillas. Despu��s de que la boquilla se haya enfriado, afloje el medidor fijo en el lado derecho de las boquillas, empuje las boquillas hacia arriba y bloquee el medidor. Prepara un papel sobre la cama.",
	"Avant l'��talonnage, veuillez charger les filaments dans les buses doubles, puis nettoyer les buses. Une fois la buse refroidie, desserrez le compteur fixe sur le cot�� droit des buses, poussez les buses vers le haut et verrouillez le compteur. Pr��parez un papier sur le lit.",
	"Laden Sie vor der Kalibrierung die Filamente in die Doppeld��sen und reinigen Sie die D��sen. Losen Sie nach dem Abk��hlen der D��se das feste Messgerat auf der rechten Seite der D��sen, schieben Sie die D��sen nach oben und verriegeln Sie das Messgerat. Bereiten Sie ein Papier auf dem Bett vor.",
	"Prima della calibrazione, caricare i filamenti nei doppi ugelli, quindi pulire gli ugelli. Dopo che l'ugello si �� raffreddato, allentare il misuratore fisso sul lato destro degli ugelli, spingere gli ugelli verso l'alto e bloccare lo strumento. Prepara un foglio sul letto.",
	"Laad v����r de kalibratie de filamenten in de dubbele spuitmonden en reinig vervolgens de spuitmonden. Nadat het mondstuk is afgekoeld, maakt u de vaste meter aan de rechterkant van de mondstukken los, drukt u de spuitmonden naar boven en vergrendelt u de meter. Leg een papier op het bed."
};

const char MMSG_NOZZLE_Z_TEXT2[8][180] PROGMEM = {
	"��΢��z��߶ȣ�ֱ����ͷ��ƽ̨�ļ�϶Ϊһ��ֽ�ĺ��.\r\n��ɺ����һ��.",
	"Please fine-tune the height of the z-axis until the gap between the nozzle and the platform is the thickness of apiece of paper.\r\nClick Next to continue.",
    "�Υ���ȥץ�åȥե��`���g�Υ���åפ����κ񤵤ˤʤ�ޤ�, Z�S�θߤ���΢�{�����Ƥ�������. \r\n�Τؤ򥯥�å����ƾA���ޤ�.",
	"Ajuste la altura del eje z hasta que el espacio entre la boquilla y la plataforma tenga el grosor de una hoja de papel. Haga clic en Siguiente para continuar.",
    "Veuillez ajuster la hauteur de l'axe z jusqu'�� ce que l'��cart entre la buse et la plate-forme soit l'��paisseur de chaque papier.\r\nCliquer sur Suivant pour continuer.",
    "Bitte justieren Sie die Hohe der Z-Achse bis der Abstand zwischen Druckbett und D��se nahezu der Papierdicke entspricht.\r\nF��r den nachsten Schritt klicken Sie auf Fortfahren.",
    "Si prega di regolare l'altezza dell'asse z fino a quando lo spazio tra l'ugello e la piattaforma �� lo spessore di un pezzo di carta.\r\nFare clic su Avanti per continuare.",
    "Pas de hoogte van de Z as aan totdat de afstand tussen de spuitmond en het print platform gelijk is aan de dikte van het papier.\r\nKlik op Verder om door te gaan."
};

const char MMSG_NOZZLE_Z_TEXT3[8][290] PROGMEM = {
	"�ɿ�����ͷ�Ҳ�̶�����, ק������������˿, ����ͷ������ֽ�Ӵ���Ȼ����������.\r\n��ɺ����һ��.",
	"Loosen the fixed machine meter on the right side of the right nozzle, drag the filament out of the extruder to push the nozzle to contact with the paper, and then lock the machine meter. Click Next when finished.",
	"�҂ȤΥΥ�����҂Ȥˤ���̶�ʽ�Υޥ����`���`�򾏤�, �ե�����Ȥ�Ѻ���C�������������ƥΥ����Ѻ���Ƽ��˽Ӵ������Ƥ���, �ޥ����`���`���å����ޤ�.  �K�ˤ�����, [�Τ�]�򥯥�å����ޤ�. ",
	"Afloje el medidor fijo de la m��quina en el lado derecho de la boquilla derecha, arrastre el filamento fuera de la extrusora para empujar la boquilla para que entre en contacto con el papel y luego bloquee el medidor de la m��quina. Haga clic en Siguiente cuando termine.",
	"Desserrez le compteur fixe de la machine sur le cot�� droit de la buse droite, faites glisser le filament hors de l'extrudeuse pour pousser la buse au contact du papier, puis verrouillez le compteur de la machine. Cliquez sur Suivant lorsque vous avez termin��.",
	"Losen Sie das feste Maschinenmessgerat auf der rechten Seite der rechten D��se, ziehen Sie das Filament aus dem Extruder, um die D��se auf den Kontakt mit dem Papier zu dr��cken, und verriegeln Sie dann das Maschinenmessgerat. Klicken Sie auf Weiter, wenn Sie fertig sind.",
	"Allentare il misuratore fisso della macchina sul lato destro dell'ugello destro, trascinare il filamento fuori dall'estrusore per spingere l'ugello a contatto con la carta, quindi bloccare il misuratore della macchina. Fare clic su Avanti al termine.",
	"Maak de vaste machinemeter aan de rechterkant van de rechtermondstuk los, sleep het filament uit de extruder om het mondstuk in contact te brengen met het papier, en vergrendel vervolgens de machinemeter. Klik op Volgende als u klaar bent."
};

const char MMSG_NOZZLE_Z_TEXT4[8][290] PROGMEM = {
	"�ɿ�����ͷ�Ҳ�̶�����, ק������������˿, ����ͷ������ֽ�Ӵ���Ȼ����������.\r\n��ɺ����һ��.",
	"Loosen the fixed machine meter on the right side of the left nozzle, drag the filament out of the extruder to push the nozzle to contact with the paper, and then lock the machine meter. Click Next when finished.",
	"��ȤΥΥ�����҂Ȥˤ���̶�ʽ�Υޥ����`���`�򾏤�, �ե�����Ȥ�Ѻ���C����ɥ�å����ƥΥ����Ѻ���Ƽ��˽Ӵ������Ƥ���, �ޥ����`���`���å����ޤ�. �K�ˤ�����, [�Τ�]�򥯥�å����ޤ�.",
	"Afloje el medidor fijo de la m��quina en el lado derecho de la boquilla izquierda, arrastre el filamento fuera de la extrusora para empujar la boquilla para que entre en contacto con el papel y luego bloquee el medidor de la m��quina. Haga clic en Siguiente cuando termine.",
	"Desserrez le compteur fixe de la machine sur le cot�� droit de la buse gauche, faites glisser le filament hors de l'extrudeuse pour pousser la buse au contact du papier, puis verrouillez le compteur de la machine. Cliquez sur Suivant lorsque vous avez termin��.",
	"Losen Sie das feste Maschinenmessgerat auf der rechten Seite der linken D��se, ziehen Sie das Filament aus dem Extruder, um die D��se auf den Kontakt mit dem Papier zu dr��cken, und verriegeln Sie dann das Maschinenmessgerat. Klicken Sie auf Weiter, wenn Sie fertig sind.",
	"Allentare il misuratore fisso della macchina sul lato destro dell'ugello sinistro, trascinare il filamento fuori dall'estrusore per spingere l'ugello a contatto con la carta, quindi bloccare il misuratore della macchina. Fare clic su Avanti al termine.",
	"Maak de vaste machinemeter aan de rechterkant van het linkermondstuk los, sleep het filament uit de extruder om het mondstuk in contact te brengen met het papier en vergrendel vervolgens de machinemeter. Klik op Volgende als u klaar bent."
};

const char MMSG_WIFI_BOOT_ERROR[8][88] PROGMEM = {
	"����ģ������Ͽ�, ��ӡ��ֹ.",
 	"The WIFI module was disconnected unexpectedly, printing was aborted.",
	"WIFI�⥸��`�뤬���ڤ����жϤ���, ӡˢ����ֹ����ޤ�����",
	"El m��dulo WIFI se desconect�� inesperadamente y se interrumpi�� la impresi��n.",
	"The WIFI module was disconnected unexpectedly, printing was aborted.",
	"Das WiFi-Modul wurde unerwartet beendet, der Druck wurde abgebrochen.",
	"The WIFI module was disconnected unexpectedly, printing was aborted.",
    "De verbinding met de WiFi module is onverwacht verbroken, printproces is afgebroken."
};

const char MMSG_BUTTON_QR[8][13] PROGMEM = {
	"  ��ά��",			// 
	"  QR code",
	"  QR���`��",
	" C��digo QR",
    "  QR Code",
    "  QR-Code",
    "  QR Code",
    "  QR code"
};

const char MMSG_QR_TITLE[8][31] PROGMEM = {
	"�豸���кŶ�ά��",			// 
	"Serial number QR code",
	"���ꥢ�뷬��QR���`��",
	"N��mero de serie c��digo QR",
    "Num��ro de s��rie QR code",
    "QR-Code der Seriennummer",
    "Codice QR del numero di serie",
    "Serienummer QR code"
};

const char MMSG_MAINMENU[8][14] PROGMEM = {
	" ������",
	"  Main",
 	" �ᥤ��",
	"Principal",
	"Principal",
	"Hauptmen��",
	"Principale",
    "Hoofdmenu"
};

const char MMSG_SETTING_BABYSTEP[8][30]  = {
	"    ΢��Z��",
	"  Babystep Z",
	"  Z���� �ӥɥ�",
	"  Micropaso Z",
    "  Babystep Z",
    "  Babystep Z",
    "  Babystep Z",
	"  Babystep Z"
};

const char MMSG_BABYSTEP_TITLE[8][30]  = {
	"΢��Z��",
	"Babystep Z",
	"Z���� �ӥɥ�",
	"Micropaso Z",
    "Babystep Z",
    "Babystep Z",
    "Babystep Z",
	"Babystep Z"
};

const char MMSG_BABYSTEP_TIP[8][210] = {
	"�����ť�����԰�0.05mm���΢����ͷ�߶�.\r\n�����ʹ�øù���, �Է���ģ�ͻ��ӡ��.",
	"Click the button to fine-tune the height of the nozzle in 0.05mm intervals. Please use this function carefully to prevent damage to the model or printer.",
	"�ܥ���򥯥�å�����, �Υ���θߤ���0.05mm�g����΢�{�����ޤ�. ��ǥ��ץ�󥿩`�Γp�����������, ���ΙC�ܤ����ؤ�ʹ�ä��Ƥ�������.",
	"Haga clic en el bot��n para ajustar la altura de la boquilla en intervalos de 0,05 mm. Utilice esta funci��n con cuidado para evitar da?os en el modelo o la impresora.",
	"Cliquez sur le bouton pour r��gler avec pr��cision la hauteur de la buse par intervalles de 0,05 mm. Veuillez utiliser cette fonction avec pr��caution pour ��viter d'endommager le mod��le ou l'imprimante.",
	"Klicken Sie auf die Schaltfl?che, um die H?he der D��se in Intervallen von 0,05 mm fein einzustellen. Bitte verwenden Sie diese Funktion sorgf?ltig, um Sch?den am Modell oder Drucker zu vermeiden.",
	"Fare clic sul pulsante per regolare con precisione l'altezza dell'ugello a intervalli di 0,05 mm. Utilizzare questa funzione con attenzione per evitare danni al modello o alla stampante.",
	"Klik op de knop om de hoogte van het mondstuk in stappen van 0,05 mm af te stellen. Gebruik deze functie zorgvuldig om schade aan het model of de printer te voorkomen."
};

const char MMSG_SETTING_AUTOSWITCH[8][30]  = {
	"  �Զ��л���ͷ",
	"  Auto Switch",
	"  ���`�ȥ����å�",
	"    Cambiar",
    "   Detecteur",
    "   Schalter",
    "  Interruttore",
	"   Schakelaar"
};

const char MMSG_SETTING_MANUALSWITCH[8][30]  = {
	"  �ֶ��л���ͷ",
	" Manually Switch",
	"  �քӥ����å�",
	"    Manual",
    "    Manuel",
    "   Handbuch",
    "   Manuale",
	"  Handleiding"
};

const char MMSG_TITLE_MANUALSWITCH[8][40]  = {
	"�ֶ��л���ͷ",
	"Manually Switch Nozzle",
	"�քӤǥΥ�����Ф��椨��",
	"Cambiar manualmente la boquilla",
    "Changer manuellement de buse",
    "D��se manuell wechseln",
    "Cambia ugello manualmente",
	"Handmatig van mondstuk wisselen"
};

#endif // 
