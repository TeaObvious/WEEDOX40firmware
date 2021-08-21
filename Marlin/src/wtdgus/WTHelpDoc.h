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

#ifndef WT_HELPL_DOC_H
#define WT_HELPL_DOC_H

//TIP01 �ļ�ѡ�����
const char HELP_TIP01_LINE[8][330] PROGMEM = {
	"��������ʾTF���еĴ�ӡ�ļ�\r\n����ļ���, ��ʼ��ӡ\r\n������ذ�ť, ����������\r\n�����һ������һ��, ��ʾ�����ļ�.",
	"This menu displays the print file in TF card.\r\nClick on the filename to start printing.\r\nClick the back button to return to the main interface.\r\nClick the previous or next button to display more files.",
	"���Υ�˥�`��TF���`�ɤ�ӡˢ�ե�������ʾ���ޤ�.\r\n�ե��������򥯥�å�����ӡˢ���_ʼ���ޤ�.\r\n����ܥ���򥯥�å����ƥᥤ�󥤥󥿩`�ե��`���ˑ���ޤ�.\r\n���Υե�������ʾ����ˤ�, ǰ�ؤޤ��ϴΤإܥ���򥯥�å����ޤ�.",
	"Este men�� muestra el archivo de impresi��n en la tarjeta TF.\r\nHaga clic en el nombre del archivo para comenzar a imprimir.\r\nHaga clic en el bot��n Atr��s para volver a la.\r\nHaga clic en el nombre del archivo para comenzar a interfaz principal.\r\nHaga clic en el bot��n anterior o siguiente para mostrar m��s archivos.",
    "Ce menu affiche le fichier d'impression sur la carte TF.\r\nCliquez sur le nom du fichier pour lancer l'impression.\r\nCliquez sur le bouton retour pour revenir �� l'interface principale.\r\nCliquez sur le bouton pr��c��dent ou suivant pour afficher plus de fichiers.",
    "Dieses Men�� zeigt die Druckdateien auf der MicroSD-Karte an.\r\nWahlen Sie einen Dateinamen um einen Druck zu starten.\r\nHauptmen�� um ins Hauptmen�� zur��ckzukehren.\r\nzur��ck oder weiter um weitere Dateien anzuzeigen.",
    "Questo menu visualizza il file di stampa nella scheda TF.\r\nFare clic sul nome del file per avviare la stampa.\r\nFare clic sul pulsante Indietro per tornare all'interfaccia principale.\r\nFare clic sul pulsante precedente o successivo per visualizzare pi�� file.",
    "Dit menu geeft de print bestanden weer op de TF kaart.\r\nDruk op de filenaam om het printen te starten.\r\nDruk op Terug om terug te keren naar het hoofdmenu.\r\nDruk op Vorige of Volgende om de overige bestanden weer te geven."
};

// TIP02 ��ӡ�ļ�����
const char HELP_TIP02_LINE[8][460] PROGMEM = {
	"��������ʾ��ǰ��ӡ���ļ���, ����ӡ���ĸ���״̬����.\r\n��ӡʣ��ʱ��ΪԤ��, ��ʵ��ʣ��ʱ�����һ���ĳ���.\r\n����ݶ���ť, ��ӡ������ͣ.\r\n������ð�ť, �����ӡ�������ý���.\r\n����رհ�ť, ��ǰ��ӡ������ֹ.",
	"This screen displays the information of current job.\r\nThe remaining time is estimated, it may be some\r\ndifferent from the actual remaining time.\r\nClick the pause button to pause the print job.\r\nClick the settings button to goto the print parameters\r\nsettings screen.\r\nClick the quit button to abort the current job.",
	"���λ���ˤϬF�ڤΥ���֤���󤬱�ʾ����ޤ�.\r\n�Ф�r�g�ϸ���Ǥ���,�g�H�βФ�r�g�Ȥ϶��ٮ��ʤ���Ϥ�����ޤ�.\r\nӡˢ����֤�һ�rֹͣ����ˤ�, һ�rֹͣ�ܥ���򥯥�å����ޤ�. \r\n�O���ܥ���򥯥�å�����, ӡˢ�ѥ��`���O��������M�ߤޤ�.\r\n�F�ڤΥ���֤���ֹ����ˤ�, �]����ܥ���򥯥�å����ޤ�.",
	"Esta pantalla muestra la informaci��n del trabajo actual.\r\nEl tiempo restante es estimado, puede ser algo diferente del tiempo restante real.\r\nHaga clic en el bot��n de pausa para pausar el trabajo deimpresi��n.\r\nHaga clic enel bot��n de configuraci��n para ir a la pantallade configuraci��nde los par��metros de impresi��n.\r\nHaga clic en el bot��n de cerrar para abortar el trabajo actual.",
    "Cet ��cran affiche les informations du travail en cours.\r\nLe temps restant est estim��, il peut ��tre quelque peu diff��rent du temps restant r��el.\r\nCliquez sur le bouton pause pour interrompre le travail d'impression.\r\nCliquez sur le bouton Param��tres pour acc��der �� l'��cran des param��tres d'impression.\r\nCliquez sur le bouton Quitter pour abandonner le travail en cours.",
    "Hier sehen Sie Informationen zum aktuellen Druckauftrag.\r\nDie verbleibende Zeit ist geschatzt und kann von der real verbleibenden Zeit abweichen.\r\nPause um den Druck zu pausieren.\r\nEinstellungen um die aktuellen Druckparameter anzuzeigen\r\nAbbrechen  um den aktuellen Druck abzubrechen.",
    "Questa schermata visualizza le informazioni del lavoro corrente.\r\nIl tempo rimanente �� stimato, potrebbe essere leggermente diverso dal tempo rimanente effettivo.\r\nFare clic sul pulsante di pausa per sospendere il lavoro di stampa.\r\nFare clic sul pulsante delle impostazioni per accedere alla schermata delle impostazioni dei parametri di stampa.\r\nFare clic sul pulsante Esci per interrompere il lavoro corrente.",
    "Dit scherm geeft informatie over de huidige printtaak.r\nDe resterende tijd wordt weergegeven. Deze kan afwijken en is slechts indicatief.\r\nDruk op Pauze om de huidige printtaak te pauzeren.\r\nDruk op Instellingen om naar het printer instellingen menu te gaan.\r\nDruk op Stop om de huidige printtaak af te breken."
};

// TIP03 ��ӡ�������ý���
const char HELP_TIP03_LINE1[8][195] PROGMEM = {
	"��˿����: �����ж����˿\r\n�¶�����: �ı���ͷ���ȴ����¶�\r\n�ٶ�����: ���ڴ�ӡ�ٶ�",
	"Filament Operation: feeding or retracting the filament\r\nTemperature: adjust the temp of the nozzle or bed\r\nSpeed: adjust the printing speed",
	"�ե�����Ȳ���: �ե�����Ȥι��o�ޤ��υ��s\r\n�¶��O��: �Υ���ޤ��ϥ٥åɤ��¶Ȥ��{������\r\n���ԩ`���O��: ӡˢ�ٶȤ��{�����ޤ�",
	"Filamento: alimentaci��n o retracci��n del filamento.\r\nTemperatura: ajustar la temperatura de la boquilla o cama.\r\nVelocidad: ajustar la velocidad de impresi��n.",
    "Fonctionnement du filament: alimentation ou r��traction du filament\r\nTemp��rature: ajustez la temp��rature de la buse ou du lit\r\nVitesse: ajustez la vitesse d'impression",
    "Filamenteinstellungen: Laden und Entladen von Filament\r\nTemperatur: Einstellen der Temperatur von D��se und Druckbett\r\nGeschwindigkeit: Einstellen der Druckgeschwindigkeit",
    "Funzionamento del filamento: alimentazione o ritiro del filamento\r\nTemperatura: regola la temperatura dell'ugello o del letto\r\nVelocit��: regola la velocit�� di stampa",
    "Filament bediening: Invoer of Terugvoer van het filament\r\nTemperatuur: pas bed of printkop temperatuur aan\r\nSnelheid: pas de printsnelheid aan"
};

const char HELP_TIP03_LINE2[8][180] PROGMEM = {
	"��ӡ��ɹػ�: �򿪻�رմ�ӡ���Զ��ػ�����\r\n��˿���: ���û������˿��⹦��.\r\n΢��Z��: ʵʱ����Z��߶�.",
	"Auto Power Off: Automatic shutdown after printing.\r\nRunout Sensor: filament detection.\r\nBabystep Z: Adjust the z axis in real-time.",
	"�ץ��ȥ���: ӡˢ����Ԅӥ���åȥ�����.\r\n��쥻�󥵩`���ե�����ȗʳ�.\r\nZ���� �ӥɥ�: �ꥢ�륿�����z�S���{�����ޤ�.",
	"Apagado autom��tico: apagado autom��tico despu��s de imprimir.\r\nRunout Sensor: detecci��n de filamento.\r\nMicropaso Z: Ajusta el eje z en tiempo real.",
    "Arr��t automatique: arr��t automatique apr��s l'impression.\r\nCapteur de voile: d��tection de filament.\r\nBabystep Z: Ajustez l'axe z en temps reel.",
    "Auto Power Off: Drucker nach vollendetem Druck ausschalten.\r\nFilamentsensor: Pr��ft auf vorhandenes Filament.\r\nBabystep Z: Passen Sie die Z-Achse in Echtzeit an.",
    "Spegnimento automatico: spegnimento automatico dopo la stampa.\r\nSensore di runout: rilevamento del filamento.\r\nBabystep Z: Regola l'asse z in tempo reale.",
    "Auto Power Off: Zet printer automatisch uit na het printen.\r\nRunout Sensor: filament detectie.\r\nBabystep Z: Pas de z-as in realtime aan."
};

const char HELP_TIP03_LINE3[8][390] PROGMEM = {
	"�Զ��л���ͷ: ��⵽��˿��, �Զ��л�����һ����ͷ������ӡ.\r\n�ֶ��л���ͷ: �ֶ��л�����һ����ͷ������ӡ.\r\n����ػ�: ���浱ǰ��ӡ�����Զ��ػ�, �����ϵ����Լ�����ӡ",
	"Auto Switch: After filament runout, it will automatically switch to another nozzle to resume the printing job.\r\nManual Switch: Manually switch to another nozzle to continue printing.\r\nSave&Off: Save the current job and shut down, you can resume the printing after powering up again.",
	"���`�ȥ����å�: �ե�����Ȥ��ʤ��ʤä���, �ԄӵĤ˄e�ΥΥ�����Ф�����, ӡˢ����֤����_���ޤ�.\r\n�քӥ����å�: �քӤǄe�ΥΥ�����Ф��椨��, ӡˢ��A�Ф��ޤ�.\r\nӡˢ�򱣴�: �F�ڤΥ���֤򱣴椷�ƥ���åȥ����󤷤ޤ�. �Դ�����ֱ����ӡˢ�����_�Ǥ��ޤ�.",
	"Cambiar: Despues de que se agote el filamento, cambiara autom��ticamente a otra boquilla para reanudar el trabajo de impresion.\r\nManual: Cambie manualmente a otra boquilla para continuar imprimiendo.\r\nGuardar impresi��n: guarde el trabajo actual y cierre,puede reanudar la impresi��n despu��s de volver a encenderlo.",
    "Detecteur: Despues de que se agote el filamento, cambiara autom��ticamente a otra boquilla para reanudar el trabajo de impresion.\r\nManuel: Basculez manuellement vers une autre buse pour continuer l'impression.\r\nEnregistrer et d��sactiver: enregistrez le travail en cours et arr��tez, vous pouvez reprendre l'impression apr��s la mise sous tension.",
    "Schalter: Nach Ablauf des Filaments wird automatisch auf eine andere Duse umgeschaltet, um den Druckauftrag fortzusetzen.\r\nHandbuch: Wechseln Sie manuell zu einer anderen Duse, um mit dem Drucken fortzufahren.\r\nSpeichern&Ausschalten: Speichere den aktuellen Druckauftrag und schalte den Drucker aus. Der Druck kann nach Wiedereinschalten des Druckers fortgesetzt werden.",
    "Interruttore: Dopo l'esaurimento del filamento, passer�� automaticamente a un altro ugello per riprendere il lavoro di stampa.\r\nManuale: Passare manualmente a un altro ugello per continuare a stampare.\r\nSalva e spegni: salva il lavoro corrente e chiudi, puoi riprendere la stampa dopo l'accensione.",
    "Schakelaar: Als het filament op is, schakelt het automatisch over naar een ander mondstuk om de afdruktaak te hervatten.\r\nHandleiding: Schakel handmatig over naar een ander mondstuk om door te gaan met afdrukken.\r\nOpslaan&Uitzetten: Sla huidige printopdracht op en zet uit, na herstarten kan de printopdracht hervat worden."
};


// TIP04 ��ӡ�ٶ����ý���
const char HELP_TIP04_LINE[8][315] PROGMEM = {
	"������ɵ��ڵ�ǰ��ӡ����Ĵ�ӡ�ٶ�.\r\n��ע��: ��ӡ�ٶ����ù�������Խ��ʹ�ӡ����.\r\n�뾡��ʹ����Ƭ����еĸ���ģʽ�����̴�ӡʱ��.",
	"This menu can adjust the printing speed of the current\r\njob.\r\nNotice: Printing speed settings too fast will significantly\r\nreduce the print quality.\r\nPlease try to use the high speed mode in the slicing\r\nsoftware to shorten the printing time.",
	"���Υ��󥿩`�ե������Ǥ�, �F�ڤ�ӡˢ����֤�ӡˢ�ٶȤ��{���Ǥ��ޤ�.\r\nע�⣺ӡˢ�ٶȤ��O�����٤������, ӡˢƷ�|������˵��¤��ޤ�.\r\nӡˢ�r�g��̿s������٥�`�ɤΥ��饤���ǥ��եȥ�������ʹ�ä��ƤߤƤ�������.",
	"Esta interfaz puede ajustar la velocidad de impresi��n del trabajo de impresi��n actual.\r\nNota: La velocidad de impresi��n es demasiado r��pido reducir�� significativamente la calidad de impresi��n.\r\nIntente utilizar el modo de alta velocidad en el software de corte para acortar el tiempo de impresi��n.",
    "Ce menu peut r��gler la vitesse d'impression du travail en cours.\r\nRemarque: des param��tres de vitesse d'impression trop rapides r��duiront consid��rablement la qualit�� d'impression.\r\nVeuillez essayer d'utiliser le mode haute vitesse dans le logiciel de tranchage pour raccourcir le temps d'impression.",
    "Hier kann die Druckgeschwindigkeit f��r den aktuellen Druckjob angepasst werden\r\nAnmerkung: Eine zu hohe Druckgeschwindigkeit f��hrt zu eingeschrankter Druckqualitat.\r\nBitte versuchen Sie moglichst die Druckgeschwindigkeit ��ber die Slicingsoftware einzustellen um die Druckzeiten zu reduzieren.",
    "Questo menu pu�� regolare la velocit�� di stampa del lavoro corrente.\r\nAvviso: impostazioni di velocit�� di stampa troppo elevate ridurranno notevolmente la qualit�� di stampa.\r\nProva a utilizzare la modalit�� ad alta velocit�� nel software di slicing per abbreviare il tempo di stampa.",
    "In dit menu kun je de printsnelheid aanpassen.\r\nLet op: te hoge printsnelheden hebben een nadelige invloed op de printkwaliteit.\r\nGebruik bij voorkeur de high speed mode in de slicing software om de printtijd te verkorten."
};

// TIP05 �����Լ����
const char HELP_TIP05_LINE[8][280] PROGMEM = {
	"��ͷ���ȴ��޷���ȡ�¶Ȼ��޷����ȹ���: ������ͷ���ȴ��Ľ����Ƿ��ɶ�.\r\nX,Y,Z���޷���λ����: �����ͷδ�˶�, �����������Ƿ��ɶ�. �����ͷ���е�ԭ��λ�ú�δֹͣ, ������λ�����Ƿ���, ���ǽ����Ƿ��ɶ�.",
	"Temperature can't be read or heating fail: Please check if the cable of the nozzle or the bed is loose.\r\nX, Y, Z axis homing fault: If the nozzle is not moving,\r\nplease check if the motor cable is loose.",
	"�¶Ȥ��i��ȡ��ʤ�, �ޤ��ϼӟ᤬ʧ������:�Υ���ޤ��ϥ٥åɤΥ��`�֥뤬����Ǥ��ʤ����_�J���Ƥ�������.\r\nX, Y, Z�S��ԭ��͎��������Υ��뤬�Ӥ��ʤ����Ϥ�, ��`���`���`�֥뤬����Ǥ��ʤ����_�J���Ƥ�������.",
	"La temperatura no se puede leer o la calefacci��n falla: compruebe si el cable de la boquilla o la cama est��n flojos.\r\nFalla de referencia del eje X, Y, Z: si la boquilla no se mueve, compruebe si el cable del motor est�� suelto.",
    "La temp��rature ne peut pas ��tre lue ou le chauffage ��choue: veuillez v��rifier si le cable de la buse ou le lit est lache.\r\nD��faut de r��f��rence des axes X, Y, Z: Si la buse ne bouge pas, veuillez v��rifier si le cable du moteur est lache.",
    "Temperatur kann nicht ermittelt werden oder Aufheizen war fehlerhaft: Pr��fen Sie ob das Kabel von D��se und/oder Heizbett evtl. lose ist.\r\nX, Y, Z-Achsenfehler (Startposition): Wenn sich die D��se nicht bewegt, pr��fen Sie bitte ob das entsprechende Motorkabel lose ist.",
    "Impossibile leggere la temperatura o il riscaldamento non funziona: controllare se il cavo dell'ugello o del letto �� allentato.\r\nErrore di homing sugli assi X, Y, Z: Se l'ugello non si muove, controllare se il cavo del motore �� allentato.",
    "Temperatur kan niet worden afgelezen of opwarm defect: Controlleer of de kabel van de printkop of het printbed los zit.\r\nX,Y,Z as homing fout: als de printkop niet beweegt, controlleer of de motor kabel los zit."
};

// TIP06 ά������1
const char HELP_TIP06_LINE[8][270] PROGMEM = {
	"�Զ���˿: �Զ�������ͷ��������˿.\r\n�Զ���˿: �Զ�������ͷ���˳���˿.\r\n�ֶ�����: �ֶ�������ͷ���ȴ����¶Ȳ�����.",
	"Filament Feed: Automatic heating of the nozzle and loading of the filament.\r\nFilament Retract: Automatically heats the nozzle and retract the filament.\r\nPreheat: Set the temperature of the nozzle or bed and heating.",
	"�Ԅӥ磻���ͤ�: �Υ�����ԄӼӟ�ȥե�����Ȥ�װ��.\r\n�Ԅӥ磻���ȥ: �Υ�����ԄӵĤ˼ӟᤷ, �ե�����Ȥ򅧿s�����ޤ�.\r\n�քӼӟ᣺�Υ���ȥۥåȥ٥åɤ��¶Ȥ��քӤ��O����, �ӟᤷ�ޤ�.",
	"Entrada de filamento: calentamiento autom��tico de la boquilla y carga del filamento.\r\nSalida de filamento: calienta autom��ticamente la boquilla y retrae el filamento.\r\nPrecalentar: ajuste la temperatura de la boquilla y la cama y la calefacci��n.",
    "Filament Feed: Chauffage automatique de la buse et chargement du filament.\r\nR��traction du filament: chauffe automatiquement la buse et r��tracte le filament.\r\nPr��chauffer: r��gler la temp��rature de la buse ou du lit et le chauffage.",
    "Filament laden: Automatisches aufheizen der D��se und laden des Filaments.\r\nFilament entladen: Automatisches aufheizen der D��se und entladen des Filaments.\r\nVorheizen: Einstellen der D��sen und Druckbetttemperatur und anschliebendes Aufheizen.",
    "Alimentazione del filamento: riscaldamento automatico dell'ugello e caricamento del filamento.\r\nFilament Retract: riscalda automaticamente l'ugello e ritrae il filamento.\r\nPreriscaldamento: impostare la temperatura dell'ugello o del letto e del riscaldamento.",
    "Filament Invoer: Automatisch opwarmen van de printkop en inladen van het filament.\r\nFilament Terugvoer: Automatisch opwarmen van de printkop en terugvoeren van het filament\r\nOpwarmen: Stel de temperatuur van de printkop en bed in."
};

// TIP07 ά������2
const char HELP_TIP07_LINE[8][355] PROGMEM = {
	"�㶯ģʽ: ��ͷ��λ, �Լ��ֶ�����XYZ������˶�.\r\nƽ̨У׼: �Դ�ӡƽ̨��ˮƽ�Ƚ��е���, ʹ��ƽ������ͷ���е�XYƽ̨.\r\nZ��ƫ��: ΢����ͷ��ƽ̨����Ը߶�, �ɵ�����С��ӡʱ��ͷ��ƽ̨�ļ�϶.",
	"Jog Mode: Homing and manual control of XYZ motion.\r\nLevel Bed: Adjust the level of the printing platform so\r\nthat it is parallel to the XY stage of the nozzle.\r\nZ Offset: Fine-tune the relative height of the nozzle and\r\nthe platform, it can adjust the gap between the nozzle and the platform when printing.",
	"���祰��`��: XYZ������ԭ��͎����ք�����.\r\n��٥�٥å�: ӡˢ�ץ�åȥե��`��θߤ����{������, �Υ����XY���Ʃ`����ƽ�Фˤʤ�褦�ˤ��ޤ�.\r\nZ���ե��å�: �Υ���ȥץ�åȥե��`��������Ĥʸߤ���΢�{�����ޤ�. ӡˢ�r�˥Υ���ȥץ�åȥե��`����g�Υ���åפ��{���Ǥ��ޤ�.",
	"Modo de jog: Homing y control manual de movimiento XYZ.\r\nNivelar plataforma: ajuste el nivel de la plataforma de impresi��n de modo que quede paralelo a la etapa XY de la boquilla.\r\nDesfase Z: ajuste la altura relativa de la boquilla y la plataforma, puede ajustar el espacio entre la boquilla y la plataforma al imprimir.",
    "Mode Jog: Prise de r��f��rence et controle manuel du mouvement XYZ.\r\nLit de niveau: ajustez le niveau de la plate-forme d'impression de sorte qu'il soit parall��le �� l'��tage XY de la buse.\r\nD��calage Z: affinez la hauteur relative de la buse et de la plate-forme, il peut ajuster l'��cart entre la buse et la plate-forme lors de l'impression.",
    "Achsenbewegungen: Startposition und manuelles Bewegen der XYZ-Achsen.\r\nDruckbett leveln: Druckbett so einstellen, dass dieses parallel zur XY-Achse verlauft.\r\nZ-Versatz (Offset): Feineinstellung der relativen Hohe von D��se und Druckbett, so dass beim Drucken Unebenheiten automatisch ausgeglichen werden konnen.",
    "Modalit�� Jog: Homing e controllo manuale del movimento XYZ.\r\nPiano orizzontale: regolare il livello della piattaforma di stampa in modo che sia parallela alla fase XY dell'ugello.\r\nZ Offset: regola l'altezza relativa dell'ugello e della piattaforma, pu�� regolare lo spazio tra l'ugello e la piattaforma durante la stampa.",
    "Jog Modus: Homing en handmatige besturing van XYZ beweging.\r\nBed Afstellen: Pas het printplatform aan zodat deze parallel loopt aan de XY assen van de printkop.\r\nZ Marge: Finetunen van de afstand van de printkop tot het printbed. Afstellen tijdens het printen is mogelijk."
};

// TIP08 ά������3
const char HELP_TIP08_LINE[8][298] PROGMEM = {
	"�ӽ����ظ߶ȵ���: ���ڽӽ���������ͷ�����λ��. �ӽ����ع���, �ᵼ���Զ���ƽʱ��ͷ��ƽ̨ײ��. �ӽ����ع���, ��ӡʱ���׹ε�ģ��.\r\n�رյ��: �����ʱ, λ�ûᱻ�����޷��ƶ�. ������Ҫ�ֶ�������ͷ��ƽ̨��λ��ʱ, ��Ҫ���ȹرյ��, ������������.",
	"Proximity Height: Adjust the relative position of the proximity switch to the nozzle.\r\nMotor Off: When the motor is turned on, the position is\r\nlocked and cannot be moved.",
	"���Ӥθߤ�: ���ӥ����å��ȥΥ��������λ�ä��{�����ޤ�.\r\n��`���`���Ф�: ��`���`���Դ�������, λ�ä���å�����ƄӤ��ʤ��ʤ�ޤ��քӤǥΥ���ޤ��ϥץ�åȥե��`���λ�ä��{�������Ҫ��������Ϥ�, ����˥�`���`��",
	"Proximidad: ajuste la posici��n relativa del interruptor de proximidad al cabezal rociador. \r\nMotor apagado: cuando el motor est�� encendido, la posici��n se bloquea y no se puede mover.",
    "Hauteur de proximit��: ajustez la position relative du commutateur de proximit�� par rapport �� la buse.\r\nMoteur ��teint: lorsque le moteur est allum��, la position est verrouill��e et ne peut pas ��tre d��plac��e.",
    "Hohe des Annaherungssensors: Justieren der relativen Position von Annaherungssensor und D��se.\r\nD��senversatz: Ausrichten der beiden D��sen zueinander f��r ein einwandfreies Druckbild.\r\nMotoren deaktivieren: Motoren deaktivieren um die Achsen frei per Hand bewegen zu konnen.",
    "Altezza di prossimit��: regola la posizione relativa dell'interruttore di prossimit�� rispetto all'ugello.\r\nMotore spento: quando il motore �� acceso, la posizione �� bloccata e non pu�� essere spostata.",
    "Hoogte-sensor Hoogte: Pas de relatieve positie van de sensor aan tov de printkop.\r\nPrintkop Marge: Pas de afstanden tussen beide printkoppen aan om te zorgen dat prints uit beide printkoppen met elkaar uitlijnen.\r\nMotor Uit: Als de motor is ingeschakeld, wordt de positie vergrendeld."
};

// TIP09 �ֶ����Ƚ���
const char HELP_TIP09_LINE[8][305] PROGMEM = {
	"����ͷ��ƽ̨����һ�����, ���ǽ��������е�һ��.\r\n����Ҫ���ȵ���Ŀ, �ɽ��¶�����Ϊ0.\r\n���ȷ��, ��ʼ����.\r\n���ȡ��, �رռ��Ȳ�����.",
	"The nozzle and the bed are heated together or only\r\none of them is heated.\r\nFor item that do not require heating, set the temperature to zero.\r\nClick OK to start heating.\r\nClick Cancel to turn off heating and return.",
	"�Υ���ȥ٥åɤ�һ�w�˼ӟᤵ��뤫, �ޤ��Ϥ�����һ���������ӟᤵ���.\r\n�ӟ���Ҫ�Ȥ��ʤ�ƷĿ�ˤĤ��Ƥ�, �¶Ȥ򥼥���O�����Ƥ�������.\r\n�ӟ���_ʼ����ˤ�OK�ܥ���򥯥�å����Ƥ�������.\r\n�ӟ�򥪥դˤ��Ƒ���ˤ�, ����󥻥�]�ܥ���򥯥�å����ޤ�.",
	"La boquilla y la cama se calientan juntas o solo una de ellas se calienta.\r\nPara los art��culos que no requieren calefacci��n, ajustela temperatura a cero.\r\nHaga clic en el bot��n Aceptar para iniciar elcalentamiento.\r\nHaga clic en el bot��n Cancelar para apagar la calefacci��n y volver.",
    "La buse et le lit sont chauff��s ensemble ou un seul d'entre eux est chauff��.\r\nPour les articles qui ne n��cessitent pas de chauffage, r��glez la temp��rature sur z��ro.\r\nCliquez sur OK pour d��marrer le chauffage.\r\nCliquez sur Annuler pour d��sactiver le chauffage et le retour.",
    "Hier die Temperatur f��r Druckbett und D��sen einstellen\r\nSoll eine D��se und/oder das Druckbett nicht geheizt werden, dann hierf��r jeweils die Temperatur auf 0 einstellen\r\nOK startet das Aufheizen\r\nAbbruch beendet das Men�� ohne Parameter zu andern.",
    "L'ugello e il letto vengono riscaldati insieme o solo uno di essi viene riscaldato.\r\nPer gli articoli che non richiedono riscaldamento, impostare la temperatura a zero.\r\nFare clic su OK per avviare il riscaldamento.\r\nFare clic su Annulla per spegnere il riscaldamento e tornare.",
    "De printkop en het printbed worden beide opgewarmd of enkel een van beide.\r\nVoor onderdelen die niet hoeven te worden opgewarmd, stel deze in op 0 graden.\r\nDruk op OK op op te warmen.\r\nDruk op Annuleer om verwarming uit te schakelen en terug te keren."
};

// TIP10 �㶯ģʽ����
const char HELP_TIP10_LINE[8][370] PROGMEM = {
	"���X��ߵİ�ť, ��ͷ�����ƶ�, ������ť���ƶ�����ֱ���50mm, 10mm, 1mm.\r\n���Y��ߵİ�ť, ƽ̨��ǰ�ƶ�, ������ť���ƶ�����ֱ���50mm, 10mm, 1mm.\r\n���Z��ߵİ�ť, ƽ̨�����ƶ�, ������ť���ƶ�����ֱ���10mm, 1mm, 0.1mm.",
	"Click the left button of X, the nozzle moves to the left, the distance of the three buttons is 50mm, 10mm and 1mm.\r\nClick the left button of Y, the bed moves forward,\r\nthe distance is same as X.\r\nClick the left button of Z. the bed moves upwards. The distance is 10mm, 1mm amd 0.1mm.",
	"X����ܥ���򥯥�å������, �Υ��뤬����ƄӤ�, 3�ĤΥܥ���ξ��x��50 mm, 10 mm, 1 mm�Ǥ�.\r\nY����ܥ���򥯥�å������, �٥åɤ�ǰ�����ƄӤ��ޤ�.���x��X��ͬ���Ǥ�.\r\nZ����ܥ���򥯥�å������, �٥åɤ��Ϥ��ƄӤ��ޤ����x��10mm, 1mm, 0.1mm�Ǥ�.",
	"Haga clic en el bot��n izquierdo de X, la boquilla se mueve hacia la izquierda, la distancia de los tres botones es de 50mm, 10mm y 1mm.\r\nHaga clic en el bot��n izquierdo de Y, la cama se mueve hacia adelante, la distancia es la misma que X.\r\nHaga clic en el bot��n izquierdo de Z. la cama se mueve hacia arriba. La distancia es de 10mm, 1mm amd 0.1mm.",
    "Cliquez sur le bouton gauche de X, la buse se d��place vers la gauche, la distance des trois boutons est de 50 mm, 10 mm et 1 mm.\r\nCliquez sur le bouton gauche de Y, le lit avance, la distance est la m��me que X.\r\nCliquez sur le bouton gauche de Z, le lit se d��place vers le haut. La distance est de 10 mm, 1 mm et 0,1 mm.",
    "Die Pfeile bewegen jeweils die X- und Y-Achsen um 50mm, 10mm und 1mm in Pfeilrichtung.\r\nDie Z-Achse bewegt sich entsprechend, aber um jeweils 10mm, 1mm und 0.1mm rauf und runter.",
    "Fare clic sul pulsante sinistro di X, l'ugello si sposta a sinistra, la distanza dei tre pulsanti �� 50 mm, 10 mm e 1 mm.\r\nFare clic sul pulsante sinistro di Y, il letto si sposta in avanti, la distanza �� la stessa di X.\r\nFare clic sul pulsante sinistro di Z, il letto si sposta verso l'alto. La distanza �� di 10 mm, 1 mm e 0,1 mm.",
    "De knoppen links van X bewegen de printkop naar links. De afstanden zijn 50mm, 10mm en 1mm.\r\nDe knoppen links van Y bewegen het printbed naar voren,\r\nde afstanden zijn gelijk aan X.\r\nDe knoppen links van Z bewegen het printbed naar boven. De afstanden zijn 10mm, 1mm en 0.1mm."
};

// TIP11 ���ý���1
const char HELP_TIP11_LINE[8][280] PROGMEM = {
	"Wifi��������: ����Wifi����, �Լ�Wifi�豸OTA����.\r\n��������: ���ý������ʾ����.\r\n�豸��Ϣ: ��ʾ�豸�Ĵ�ӡʱ��Ͱ汾��Ϣ.",
	"Wifi Setting: Configuring Wifi network, and Wifi device OTA upgrade.\r\nLanguage Setting: Set the display language of the interface.\r\nMachine Info: Display device print time and version.",
	"�o��LAN�O��: Wifi�ͥåȥ�`�����O��, �����Wifi�ǥХ�����OTA���åץ���`��. \r\n���Z�O��: ���󥿩`�ե��`���α�ʾ���Z���O�����ޤ�. \r\n�ǥХ������: �ǥХ�����ӡˢ�r�g�ȥЩ`����������ʾ���ޤ�.",
	"Red wifi: configuraci��n de la red Wifi y actualizaci��n de OTA del dispositivo Wifi.\r\nIdioma: establece el idioma de visualizaci��n de lainterfaz\r\nInformacion: muestra el tiempo de impresi��n deldispositivo y la informaci��n de la versi��n.",
    "Param��tres Wifi: configuration du r��seau Wifi et de la mise �� niveau OTA du p��riph��rique Wifi.\r\nR��glage de la langue: d��finissez la langue d'affichage de l'interface.\r\nInfo machine: affiche l'heure et la version d'impression du p��riph��rique.",
    "Wifi Einstellungen: Konfiguration der Wifi Verbindung, und des OTA Wifi Gerateupgrades.\r\nSpracheinstellungen: Auswahl der Sprache, in der die Bedienoberflache angezeigt wird.\r\nGerate Info: Zeigt Infos zu Gerateversion und Gesamtdruckzeit des Druckers an.",
    "Impostazioni Wi-Fi: configurazione della rete Wi-Fi e aggiornamento OTA del dispositivo Wi-Fi.\r\nImpostazione lingua: consente di impostare la lingua di visualizzazione dell'interfaccia.\r\nInformazioni macchina: visualizza l'ora e la versione di stampa del dispositivo.",
    "WiFi Instelling: Configuratie van het WiFi netwerk, WiFi apparaat OTA upgrade.\r\nTaal Instelling: Stel gebruikte taal in van de user interface op het display.\r\nMachine Informatie:Toon totale printtijd en versie van de printer."
};


// TIP12 ���ý���2
const char HELP_TIP12_LINE[8][250] PROGMEM = {
	"��ӡ��ɹػ�: ��ӡ������ɺ��Զ��رյ�Դ.\r\n��˿���: ���û������˿��⹦��.\r\n�Զ��л���ͷ: ��⵽��˿��, �Զ��л�����һ����ͷ������ӡ.",
	"Auto Power Off: Automatic shutdown after printing.\r\nRunout Sensor: filament detection.\r\nAuto Switch: After filament runout, it will automatically switch to another nozzle to resume the printing job.",
	"�ץ��ȥ���: ӡˢ����Ԅӥ���åȥ�����.\r\n��쥻�󥵩`���ե�����ȗʳ�.\r\n���`�ȥ����å�: �ե�����Ȥ��ʤ��ʤä���, �ԄӵĤ˄e�ΥΥ�����Ф�����, ӡˢ����֤����_���ޤ�.",
	"Apagado autom��tico: apagado autom��tico despu��s de.\r\nRunout Sensor: detecci��n de filamento.\r\nCambiar: Despues de que se agote el filamento, cambiara autom��ticamente a otra boquilla para reanudar el trabajo de impresion.",
    "Arr��t automatique: arr��t automatique apr��s l'impression.\r\nCapteur de voile: d��tection de filament.\r\nDetecteur: Despues de que se agote el filamento, cambiara autom��ticamente a otra boquilla para reanudar el trabajo de impresion.",
    "Auto Power Off: Schaltet den Drucker nach Beendigung des Druckes aus.\r\nFilamentsensor: Pr��ft auf vorhandenes Filament.\r\nSchalter: Nach Ablauf des Filaments wird automatisch auf eine andere Duse umgeschaltet, um den Druckauftrag fortzusetzen.",
    "Spegnimento automatico: spegnimento automatico dopo la stampa.\r\nSensore di runout: rilevamento del filamento.\r\nInterruttore: Dopo l'esaurimento del filamento, passer�� automaticamente a un altro ugello per riprendere il lavoro di stampa.",
    "Auto Power Off: Zet printer automatisch uit na het printen.\r\nRunout Sensor: filament detectie.\r\nSchakelaar: Als het filament op is, schakelt het automatisch over naar een ander mondstuk om de afdruktaak te hervatten."
};

// TIP13 ���ý���3
const char HELP_TIP13_LINE[8][440] PROGMEM = {
	"�����Լ�: ��ӡʱ����ʱ, �Զ�����Ҫ�������м��.\r\n�ڵ�ģʽ: ��ӡ���ڴ���״̬�����޲���ʱ���ڵȴ�һ��ʱ����Զ��رյ�Դ���Խ�Լ��Դ.\r\n�̼�����: ����, ��ȡ��ָ��̼�����.",
	"Post: Automatic testing the main parts when printer power on.\r\nPower Save Mode: When printing is in standby mode and there is no operation, it will automatically turn off the power after waiting for a period of time to save energy.\r\nFirmware Parameters: save, load or restore firmware parameters.",
	"����եƥ���: �ץ�󥿤��Դ����ä��Ȥ�����Ҫ��Ʒ���ԄӵĤ˥ƥ��Ȥ��ޤ�.\r\n��능�`��: ӡˢ���C�Ф˺Τ�������ʤ��Ȥ���, һ���r�g���äƤ����ԄӵĤ��Դ���Ф�ޤ�.\r\n�ե��`�०�����ѥ��`���`���ե��`�०�����ѥ��`���򱣴�, ��`��, �ޤ��Ϗ�Ԫ���ޤ�.",
	"Autoprueba: Prueba autom��tica de las partes principales cuando la impresora est�� encendida.\r\nAhorro de energ��a: cuando la impresi��n est�� en modo de espera y no se realiza ninguna operaci��n, se apagar�� autom��ticamente despu��s de esperar un per��odo de tiempo para ahorrar energ��a.\\r\nPar��metros del firmware: guardar, cargar o restaurar par��metros de firmware.",
    "Post: test automatique des pi��ces principales lors de la mise sous tension de l'imprimante.\r\nMode d'��conomie d'��nergie: lorsque l'impression est en mode veille et qu'aucune op��ration n'est effectu��e, l'appareil s'��teindra automatiquement apr��s avoir attendu pendant un certain temps pour ��conomiser de l'��nergie.\r\nParam��tres du micrologiciel: enregistrez, chargez ou restaurez les param��tres du micrologiciel.",
    "Post: Testet den Drucker nach dem Einschalten zuerst automatisch auf etwaige Fehler.\r\nPower Save Mode: Um Strom zu sparen wird der Drucker ausgeschaltet, wenn er eine vorgegebene Zeit inaktiv ist.\r\nFirmware Parameter: speichern, laden oder wiederherstellen der FW-Parameter.",
    "Post: verifica automatica delle parti principali all'accensione della stampante.\r\nModalit�� risparmio energetico: quando la stampa �� in modalit�� standby e non viene eseguita alcuna operazione, l'alimentazione verr�� automaticamente disattivata dopo aver atteso un periodo di tempo per risparmiare energia.\r\nParametri firmware: salva, carica o ripristina i parametri del firmware.",
    "Post: Automatische controle van de belangrijkste printer onderdelen bij het aanzetten.\r\nPower Save Modus: Als de printer op standby staat en er geen activiteit gaande is, schakelt de printer zichzelf automatisch uit na de ingestelde tijdsduur om energie te besparen.\r\nFirmware Instellingen: Opslaan, Openen, of Terugzetten van firmware instellingen."
};


// TIP14 �ڵ����ý���
const char HELP_TIP14_LINE[8][330] PROGMEM = {
	"��ӡ���ڴ���״̬, ���޲���ʱ, �ڵȴ�һ��ʱ����Զ��رյ�Դ, �Խ�Լ��Դ. �ȴ�ʱ������ô�1������30����.ѡ��رս����ýڵ繦��.",
	"When printing is in standby mode and there is no operation, it will automatically turn off the power after waiting for a period of time to save energy. The waiting time can be set from 1 minute to 30 minutes. Selecting Off will disable the power save feature.",
	"ӡˢ���C�Ф˺Τ�������ʤ��Ȥ���, ʡ���ͤΤ���һ���r�g���äƤ����ԄӵĤ��Դ���Ф�ޤ�. �����r�g��1�֤���30�֤ޤ��O���Ǥ��ޤ�. ���դ��x�k�����, ʡ����C�ܤ��o���ˤʤ�ޤ�.",
	"Cuando la impresi��n est�� en modo de espera y no hay operaci��n, se apagar�� autom��ticamente despu��s de esperar un per��odo de tiempo para ahorrar energ��a. El tiempo de espera se puede configurar desde 1 minuto hasta 30 minutos. Si selecciona Desactivado, se desactivar�� la funci��n de ahorro de energ��a.",
    "Lorsque l'impression est en mode veille et qu'aucune op��ration n'est effectu��e, l'appareil s'��teint automatiquement apr��s avoir attendu un certain temps pour ��conomiser de l'��nergie. Le temps d'attente peut ��tre r��gl�� de 1 minute �� 30 minutes. La s��lection de Off d��sactivera la fonction d'��conomie d'��nergie.",
    "Wenn der Drucker sich wegen Inaktivitat im Standby befindet  schaltet er sich nach vorgegebener Zeit selbsttatig ab um Strom zu sparen. Die Zeitdauer bis zum Abstellen kann von 1-30 Minuten eingestellt werden. Aus verhindert eine selbsttatige Abschaltung des Druckers.",
    "Quando la stampa �� in modalit�� standby e non viene eseguita alcuna operazione, spegner�� automaticamente l'alimentazione dopo aver atteso un periodo di tempo per risparmiare energia. Il tempo di attesa pu�� essere impostato da 1 minuto a 30 minuti. La selezione di Off disabiliter�� la funzione di risparmio energetico.",
    "In standby modus, wanneer er geen printactie is, schakelt de printer automatisch uit na een door de gebruiker ingestelde tijdsperiode. Deze kan ingesteld worden tussen 1 en 30 minuten. Uitgeschakeld betekent dat deze functie niet actief is. De printer gaat dan niet automatisch in standby modus."
};

// TIP15 ���ý���4
const char HELP_TIP15_LINE[8][96] PROGMEM = {
	"�����̼�: ��TF�������̼�.",
	"Upgrade: Upgrade firmware from TF card.",
	"���¤��룺TF���`�ɤ���ե��`�०�����򥢥åץ���`�ɤ��ޤ�.",
	"Actualizaci��n: actualice el firmware de la tarjeta TF.",
    "Mise �� niveau: mise �� niveau du micrologiciel de la carte TF.",
    "Upgrade: Aktualisiert die FW mittels einer FW-Datei auf der eingelegten MicroSD-Karte.",
    "Aggiornamento: aggiorna il firmware dalla scheda TF.",
    "Upgrade: Upgrade de firmware vanaf de TF kaart."
};

//TIP21 WIFI�̽���
const char HELP_TIP21_LINE[8][490] PROGMEM = {
	"��������ʾWIFI���еĴ�ӡ�ļ�\r\nͨ�����緢�͵���ӡ���е��ļ�������WIFI����\r\n����ļ���, ��ʼ��ӡ\r\n������ذ�ť, ����������\r\n�����һ������һ��, ��ʾ�����ļ�.\r\nע��, ��ӡWIFI�����ļ�ʱ, �޷��޸Ĵ�ӡ�¶�, �ٶȵȲ���.",
	"This menu displays the print file in WIFI Disk.\r\nFiles sent to the printer via the network are saved in the WIFI disk\r\nClick on the filename to start printing.\r\nClick the back button to return to the main interface.\r\nClick the previous or next button to display more files.\r\nNotice, when printing files in the WIFI disk, cannot modify the printing parameters.",
	"���Υ�˥�`��TF���`�ɤ�ӡˢ�ե�������ʾ���ޤ�. �ͥåȥ�`���U�ɤǥץ�󥿩`�����Ť��줿�ե������WIFI�ǥ������˱��椵��ޤ��ե��������򥯥�å�����ӡˢ���_ʼ���ޤ�. ����ܥ���򥯥�å����ƥᥤ�󥤥󥿩`�ե��`���ˑ���ޤ�. ���Υե�������ʾ����ˤ�, ǰ�ؤޤ��ϴΤإܥ���򥯥�å����ޤ�.\r\nWIFI�ǥ������˥ե������ӡˢ�������, ӡˢ�ѥ��`�������Ǥ��ʤ����Ȥ�ע�⤷�Ƥ�������.",
	"Este men�� muestra el archivo de impresi��n en la tarjeta TF. Haga clic en el nombre del archivo para comenzar a imprimir. Haga clic en el bot��n Atr��s para volver a la. Haga clic en el nombre del archivo para comenzar a interfaz principal. Haga clic en el bot��n anterior o siguiente para mostrar m��s archivos.\r\nTenga en cuenta que al imprimir archivos en el disco WIFI, no se pueden modificar los par��metros de impresi��n.",
    "Ce menu affiche le fichier d'impression dans le disque WIFI. Les fichiers envoy��s �� l'imprimante via le r��seau sont enregistr��s sur le disque WIFI. Cliquez sur le nom du fichier pour lancer l'impression. Cliquez sur le bouton retour pour revenir �� l'interface principale. Cliquez sur le bouton pr��c��dent ou suivant pour afficher plus de fichiers.\r\nRemarquez que lors de l'impression de fichiers sur le disque WIFI, vous ne pouvez pas modifier les param��tres d'impression.",
    "Zeigt die Dateien auf der WIFI-Disk an. Dateien die ��ber das Netzwerk an den Drucker gesendet wurden werden auf der internen WIFI-Disk gespeichert. Klicke auf einen Dateinamen um den Druck zu starten. Klicke auf Hauptmen�� um ins Hauptmen�� zur��ck zu gelangen. zur��ck oder weiter um weitere Dateien anzuzeigen.\r\nBeachten Sie, dass beim Drucken von Dateien auf der WIFI-Festplatte die Druckparameter nicht geandert werden konnen.",
    "Questo menu visualizza il file di stampa in WIFI Disk. I file inviati alla stampante tramite la rete vengono salvati nel disco WIFI. Fare clic sul nome del file per avviare la stampa. Fare clic sul pulsante Indietro per tornare all'interfaccia principale. Fare clic sul pulsante precedente o successivo per visualizzare pi�� file.\r\nNota, quando si stampano file nel disco WIFI, non �� possibile modificare i parametri di stampa.",
    "Dit menu toont de bestanden op de WiFi kaart. Bestanden die naar de printer zijn gestuurd via het netwerk worden opgeslagen op de WiFI kaart. Druk op de filenaam om het printen te starten. Druk op Terug om terug te keren naar het hoofdmenu. Druk op Vorige of Volgende om de overige bestanden weer te geven.\r\nMerk op dat bij het afdrukken van bestanden op de WIFI-schijf, de afdrukparameters niet kunnen worden gewijzigd."
};


//TIP22 ��ӡ����ѡ��
const char HELP_TIP22_LINE[8][169] PROGMEM = {
    "TF��: ��ʾTF���еĴ�ӡ�ļ�.\r\nWIFI��: ��ʾͨ�����緢����WIFI���еĴ�ӡ�ļ�.",
    "TF Card: Display the print files in the TF card.\r\nWIFI Disk: Display the print files sent to the WIFI disk via the wifi.",
    "TF���`�ɣ�TF���`���ڤ�ӡˢ�ե�������ʾ���ޤ�.\r\nWIFI�ǥ�������wifi�U�ɤ�WIFI�ǥ����������Ť��줿ӡˢ�ե�������ʾ���ޤ�.",
    "Tarjeta TF: muestra los archivos de impresi��n en la tarjeta TF.\r\nDisco WIFI: muestra los archivos de impresi��n enviados al disco WIFI a trav��s de wifi.",
    "Carte TF: affichez les fichiers d'impression sur la carte TF.\r\nDisque WIFI: affichez les fichiers d'impression envoy��s au disque WIFI via le wifi.",
    "MicroSD: Zeigt die Druckdateien auf der MicroSD-Karte an\r\nWIFI Disk: Zeigt die Dateien an, die per WiFi an die WiFi-Disk im Drucker gesendet worden sind.",
    "Scheda TF: visualizza i file di stampa nella scheda TF.\r\nDisco WIFI: visualizza i file di stampa inviati al disco WIFI tramite il wifi.",
    "TF kaart: Toon de print bestanden op de TF kaart.\r\nWiFi kaart: Toon de print files op de WiFi kaart die zijn gestuurd via WiFi."
};

//TIP23 WIFI�̴�ӡ��ʾ
const char HELP_TIP23_LINE[8][180] PROGMEM = {
    "��Ǹ, ��ӡWIFI�����ļ�ʱ, �޷��޸Ĵ�ӡ�¶�, �ٶȵȲ���.",
	"Sorry, when printing files in the WIFI disk, you cannot modify the printing temperature, speed and other parameters.",
	"�ꤷ�U����ޤ���, WIFI�ǥ������˥ե������ӡˢ�������, ӡˢ�¶�, �ٶ�, �������Υѥ��`���������뤳�ȤϤǤ��ޤ���.",
	"Lo sentimos, al imprimir archivos en el disco WIFI, no puede modificar la temperatura de impresi��n, la velocidad y otros par��metros.",
	"D��sol��, lors de l'impression de fichiers sur le disque WIFI, vous ne pouvez pas modifier la temp��rature d'impression, la vitesse et d'autres param��tres.",
	"Leider konnen Sie beim Drucken von Dateien auf der WIFI-Festplatte die Drucktemperatur, die Geschwindigkeit und andere Parameter nicht andern.",
	"Spiacenti, quando si stampano file nel disco WIFI, non �� possibile modificare la temperatura di stampa, la velocit�� e altri parametri.",
	"Sorry, wanneer u bestanden afdrukt op de WIFI-schijf, kunt u de afdruktemperatuur, snelheid en andere parameters niet wijzigen."
};

const char DIAG_PAGE1_TITLE[8][30] PROGMEM = {
	"1. X1������",
	"1. X1 motor diagnosis",
 	"1. X1��`���`",
	"1. Diagn��stico del motor X1",
    "1. Diagnostic du moteur X1",
    "1. Diagnose X1-Achsenmotor",
    "1. Diagnosi motore X1",
    "1. X1 motor diagnose"
};

const char DIAG_PAGE1_LINE[8][108] PROGMEM = {
	"���ֶ�������ͷ����ƽ̨���м�λ��. Ȼ������ʼ.",
	"Please manually move the left nozzle to the middle of\r\nthe platform. Then click start.",
	"��ȤΥΥ�����քӤǥץ�åȥե��`�������λ�ä��ƄӤ��Ƥ���, �_ʼ�򥯥�å����Ƥ�������.",
	"Mueva manualmente la boquilla izquierda al centro de la\r\nplataforma. Luego haga clic en iniciar.",
    "Veuillez d��placer manuellement la buse gauche au milieu de la plate-forme. Cliquez ensuite sur d��marrer.",
    "Bitte bewegen Sie die linke D��se per Hand zur Mitte des Druckbettes und klicken Sie dann auf Start.",
    "Si prega di spostare manualmente l'ugello sinistro al centro della piattaforma. Quindi fare clic su Start.",
    "Verplaats de linker printkop handmatig naar het midden en druk op Start."
};

const char DIAG_PAGE2_LINE[8][328] PROGMEM = {
	"����ͷ���������ƶ�5cm, �������ƶ�5cm. ��۲���ͷ�ƶ��Ƿ�����. \r\n�����쳣, ��رմ�ӡ��, ���X���������.",
	"The left nozzle will first move 5cm to the left and\r\nthen 5cm to the right. Please observe whether nozzle\r\nmoves normally. \r\nIf there is any abnormality, please turn off the printer\r\nand check the X motor and cable.",
 	"��ΥΥ���������5cm����ƄӤ�, �Τ�5cm�Ҥ��ƄӤ��ޤ�. �Υ���΄Ӥ����������ɤ�����_�J���Ƥ�������.\r\n������������Ϥϡ��ץ�󥿤��Դ���Ф�, X��`���`�ȽӾA��_�J���Ƥ�������.",
	"La boquilla izquierda se mover�� primero 5 cm hacia la izquierda y luego 5 cm hacia la derecha. Observe si la boquilla se mueve normalmente. Si hay alguna anomal��a, apague la impresora y compruebe el motor X y el cable.",
    "La buse gauche se d��placera d'abord de 5 cm vers la gauche, puis de 5 cm vers la droite. Veuillez observer si la buse se d��place normalement. S'il y a une anomalie, veuillez ��teindre l'imprimante et v��rifier le moteur X et le cable.",
    "Die linke D��se wird sich um 5cm nach links und danach um 5cm nach rechts bewegen. Bitte beobachten Sie, ob die Bewegung normal und fl��ssig erfolgt.\r\nWenn Sie irgendeine Unregelmabigkeit bei der Bewegung feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den X-Achsenmotor und das entsprechende Kabel.",
    "L'ugello sinistro si sposter�� prima di 5 cm a sinistra e poi di 5 cm a destra. Si prega di osservare se l'ugello si muove normalmente. In caso di anomalie, spegnere la stampante e controllare il motore X e il cavo.",
    "De linker printkop zal eerst 5cm naar links en dan 5cm naar rechts bewegen. Kijk of de printkop normaal beweegt.\r\nSchakel de printer meteen uit als dit niet het geval is en controlleer de X motor en kabel."
};


const char DIAG_PAGE3_TITLE[8][37] PROGMEM = {
	"2. X1��λ�������",
	"2. X1 endstop diagnosis",
 	"2. X1��ߥåȥ����å�",
	"2. Diagn��stico de tope final X1",
    "2. Diagnostic de fin de course X1",
    "2. Diagnose X1-Endschalter",
    "2. Diagnosi del finecorsa X1",
    "2. X1 eindstop diagnose"
};

const char DIAG_PAGE3_LINE[8][280] PROGMEM = {
	"����ͷ�������ƶ���X1��λ���ش�. ��۲���ͷ�����ƶ�����λ���غ��Ƿ�����ֹͣ.\r\n�����쳣, ��رմ�ӡ��, ���X��λ���غ�����.",
	"The left nozzle will move to the left to the X1 endstop. Please observe whether the nozzle stops immediately\r\nafter touching the endstop.\r\nIf there is an abnormality, please turn off the printer\r\nand check the X1 endstop and cable.",
 	"��ΥΥ����X1��ߥåȥ����å��ޤ�����ƄӤ��ޤ��Τ�, ����ƄӤ��Ƥ�����ֹͣ���뤫�ɤ�����_�J���Ƥ�������. \r\n������������Ϥ�, �ץ�󥿩`���Դ���Ф�, X��ߥåȥ����å����侀��_�J���Ƥ�������.",
	"La boquilla izquierda se mover�� hacia la izquierda hasta el tope final X1. Observe si la boquilla se detiene inmediatamente despu��s de tocar el tope final. Si hay alguna anomal��a, apague la impresora y compruebe el interruptor de l��mite X y el cable.",
    "La buse de gauche se d��placera vers la gauche vers la but��e X1. Veuillez observer si la buse s'arr��te imm��diatement apr��s avoir touch�� la but��e. S'il y a une anomalie, veuillez ��teindre l'imprimante et v��rifier la but��e et le cable X1.",
    "Die linke D��se wird sich nach links an den X1-Endschalter bewegen. Bitte beobachten Sie, ob die D��se sofort bei Ber��hrung des Endschalters stoppt\r\nWenn Sie irgendeine Unregelmabigkeit feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den X1-Endschalter.",
    "L'ugello sinistro si sposter�� a sinistra sul finecorsa X1. Si prega di osservare se l'ugello si ferma immediatamente dopo aver toccato il finecorsa. Se c'�� un'anomalia, spegnere la stampante e controllare il finecorsa X1 e il cavo.",
    "De linker printkop beweegt naar de X1 eindstop. Kijk of de printkop stopt zodra deze de eindstop raakt.\r\nAls dit niet gebeurt, zet dan de printer uit en controlleer de X1 eindstop en kabel."
};

const char DIAG_PAGE4_TITLE[8][30] PROGMEM = {
	"3. X2������",
	"3. X2 motor diagnosis",
 	"3. X2��`���`",
	"3. Diagn��stico del motor X2",
    "3. Diagnostic du moteur X2",
    "3. Diagnose X2-Achsenmotor",
    "3. Diagnosi motore X2",
    "3. X2 motor diagnose"
};

const char DIAG_PAGE4_LINE[8][108] PROGMEM = {
	"���ֶ�������ͷ����ƽ̨���м�λ��. Ȼ������ʼ.",
	"Please manually move the right nozzle to the middle of\r\nthe platform. Then click start.",
 	"�������Υ����ץ�åȥե��`��������λ�ä��քӤ��ƄӤ��Ƥ���, �_ʼ�򥯥�å����Ƥ�������.",
	"Mueva manualmente la boquilla derecha al centro de la plataforma. Luego haga clic en iniciar.",
    "Veuillez d��placer manuellement la buse droite au milieu de la plate-forme. Cliquez ensuite sur d��marrer.",
    "Bitte bewegen Sie die rechte D��se per Hand zur Mitte des Druckbettes und klicken Sie dann auf Start.",
    "Si prega di spostare manualmente l'ugello destro al centro della piattaforma. Quindi fare clic su Start.",
    "Verplaats de rechter printkop handmatig naar het midden en druk op Start."
};

const char DIAG_PAGE5_LINE[8][320] PROGMEM = {
	"����ͷ���������ƶ�5cm, �������ƶ�5cm. ��۲���ͷ�ƶ��Ƿ�����. \r\n�����쳣, ��رմ�ӡ��, ���X���������.",
	"The right nozzle will first move 5cm to the left and\r\nthen 5cm to the right. Please observe whether the movement of the nozzle is normal.\r\nIf there is any abnormality, please turn off the printer\r\nand check the X motor and cable.",
 	"�ҤΥΥ��뤬��������5cm, �Τ��Ҥ�5cm�Ӥ��ޤ�. �Υ���΄Ӥ����������ɤ�����_�J���Ƥ�������. \r\n������������Ϥ�, �ץ�󥿤��Դ���Ф�, X��`���`�ȽӾA��_�J���Ƥ�������.",
	"La boquilla derecha se mover�� primero 5 cm hacia la izquierda y luego 5 cm hacia la derecha. Observe si el movimiento de la boquilla es normal. Si hay alguna anomal��a, apague la impresora y verifique el motor X y la conexi��n.",
    "La buse droite se d��placera d'abord de 5 cm vers la gauche, puis de 5 cm vers la droite. Veuillez observer si le mouvement de la buse est normal. S'il y a une anomalie, veuillez ��teindre l'imprimante et v��rifier le moteur X et le cable.",
    "Die rechte D��se wird sich um 5cm nach links und danach um 5cm nach rechts bewegen. Bitte beobachten Sie, ob die Bewegung normal und fl��ssig erfolgt.\r\nWenn Sie irgendeine Unregelmabigkeit bei der Bewegung feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den X-Achsenmotor und das entsprechende Kabel.",
    "L'ugello destro si sposter�� prima di 5 cm a sinistra e poi di 5 cm a destra. Si prega di osservare se il movimento dell'ugello �� normale. In caso di anomalie, spegnere la stampante e controllare il motore X e il cavo.",
    "De rechter printkop zal eerst 5cm naar links en dan 5cm naar rechts bewegen. Kijk of de printkop normaal beweegt.\r\nSchakel de printer meteen uit als dit niet het geval is en controlleer de X motor en kabel."
};

const char DIAG_PAGE6_TITLE[8][36] PROGMEM = {
	"4. X2��λ�������",
	"4. X2 endstop diagnosis",
 	"4. X2��ߥåȥ����å�",
	"4. Diagn��stico del tope final X2",
    "4. Diagnostic de fin de course X2",
    "4. Diagnose X2-Endschalter",
    "4. Diagnosi del finecorsa X2",
    "4. X2 eindstop diagnose"
};

const char DIAG_PAGE6_LINE[8][275] PROGMEM = {
	"����ͷ�������ƶ���X2��λ���ش�. ��۲���ͷ�����ƶ�����λ���غ��Ƿ�����ֹͣ.\r\n�����쳣, ��رմ�ӡ��, ���X��λ���غ�����.",
	"The right nozzle will move to the right to the X2 endstop. Please observe whether the nozzle stops immediately after touching the endstop.\r\nIf there is an abnormality, please turn off the printer and\r\ncheck the X2 endsotp and cable.",
 	"�ҤΥΥ��뤬X2��ߥåȥ����å����Ҥ��ƄӤ��ޤ�.��ߥåȥ����å����Ҥ��ƄӤ���ֱ��˥Υ��뤬ֹͣ���뤫�_�J���Ƥ�������.\r\n������������Ϥ�, �ץ�󥿤��Դ���Ф�, X��ߥåȥ����å����侀��_�J���Ƥ�������.",
	"La boquilla derecha se mover�� hacia la derecha hasta el tope final X2. Observe si la boquilla se detiene inmediatamente despu��s de tocar el tope final. Si hay alguna anomal��a, apague la impresora y compruebe el extremo y el cable X2.",
    "La buse droite se d��placera vers la droite jusqu'�� la but��e X2. Veuillez observer si la buse s'arr��te imm��diatement apr��s avoir touch�� la but��e. S'il y a une anomalie, veuillez ��teindre l'imprimante et v��rifier l'extr��mit�� X2 et le cable.",
    "Die rechte D��se wird sich nach rechts an den X2-Endschalter bewegen. Bitte beobachten Sie, ob die D��se sofort bei Ber��hrung des Endschalters stoppt\r\nWenn Sie irgendeine Unregelmabigkeit feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den X2-Endschalter.",
    "L'ugello destro si sposter�� a destra sul finecorsa X2. Si prega di osservare se l'ugello si ferma immediatamente dopo aver toccato il finecorsa. Se c'�� un'anomalia, spegnere la stampante e controllare l'estremit�� X2 e il cavo.",
    "De rechter printkop beweegt naar de X2 eindstop. Kijk of de printkop stopt zodra deze de eindstop raakt.\r\nSchakel de printer meteen uit als dit niet gebeurt en controlleer de X2 eindstop en kabel."
};

const char DIAG_PAGE7_TITLE[8][30] PROGMEM = {
	"5. Y������",
	"5. Y motor diagnosis",
 	"5. Y��`���`",
	"5. Y motor diagnosis",
    "5. Et diagnostic moteur",
    "5. Diagnose Y-Achsenmotor",
    "5. E diagnosi del motore",
    "5. Y motor diagnose"
};

const char DIAG_PAGE7_LINE[8][100] PROGMEM = {
	"���ֶ���ƽ̨�����м�λ��. Ȼ������ʼ.",
	"Please manually move the bed to the middle position.\r\nThen click Start.",
 	"�٥åɤ������λ�ä��քӤ��ƄӤ��Ƥ�������.\r\n�Τ�[�_ʼ]�򥯥�å����ޤ�.",
	"La cama se mover�� hacia abajo hasta el tope Z y",
    "Veuillez d��placer manuellement le lit en position m��diane.\r\nCliquez ensuite sur D��marrer.",
    "Bitte bewegen Sie das Druckbett per Hand in die Mittelposition und klicken Sie dann auf Start.",
    "Si prega di spostare manualmente il letto nella posizione centrale.\r\nQuindi fare clic su Start.",
    "Verplaats het printbed handmatig naar het midden en druk op Start."
};

const char DIAG_PAGE8_LINE[8][316] PROGMEM = {
	"ƽ̨������ǰ�ƶ�5cm, ������ƶ�5cm. ��۲�ƽ̨�ƶ��Ƿ�����.\r\n�����쳣, ��رմ�ӡ��, ���Y���������.",
	"The bed will move forward 5cm first, and then move backward 5cm. Please observe whether the bed movement\r\nis normal.\r\nIf there is any abnormality, please turn off the printer\r\nand check the Y motor and cable.",
 	"���Į��5cm�Ȥ��M��, �Τ�5cm���ˤ��ޤ�.���Į�΄Ӥ��ˮ������ʤ����_�J���Ƥ�������.\r\n������������Ϥ�, �ץ�󥿩`���Դ���Ф�, Y��`���`�ȽӾA��_�J���Ƥ�������.",
	"La cama avanzar�� 5 cm primero y luego retroceder�� 5 cm. Observe si el movimiento de la cama es normal. Si hay alguna anomal��a, apague la impresora y compruebe el motor Y y el cable.",
    "Le lit avancera de 5 cm d'abord, puis reculera de 5 cm. Veuillez observer si le mouvement du lit est normal. En cas d'anomalie, veuillez ��teindre l'imprimante et v��rifier le moteur Y et le cable.",
    "Das Druckbett wird sich um 5cm nach vorne und danach um 5cm nach hinten bewegen. Bitte beobachten Sie, ob die Bewegung normal und fl��ssig erfolgt.\r\nWenn Sie irgendeine Unregelmabigkeit bei der Bewegung feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den Y-Achsenmotor und das entsprechende Kabel.",
    "Il letto si muover�� prima in avanti di 5 cm, quindi si muover�� indietro di 5 cm. Si prega di osservare se il movimento del letto �� normale. In caso di anomalie, spegnere la stampante e controllare il motore Y e il cavo.",
    "Het printbed zal eerst 5cm naar voren en daarna 5cm naar achteren bewegen. Kijk of het platform normaal beweegt.\r\nSchakel de printer meteen uit als dat niet het geval is en controlleer de Y motor en kabel."
};

const char DIAG_PAGE9_TITLE[8][34] PROGMEM = {
	"6. Y��λ�������",
	"6. Y endstop diagnosis",
 	"6. Y����ɥ��ȥå�",
	"6. Y diagn��stico de tope final",
    "6. Diagnostic de la but��e en Y",
    "6. Diagnose Y-Endschalter",
    "6. Diagnosi finecorsa Y",
    "6. Y eindstop diagnose"
};

const char DIAG_PAGE9_LINE[8][278] PROGMEM = {
	"ƽ̨������ƶ���Y��λ���ش�. ��۲�ƽ̨����ƶ�����λ���غ��Ƿ�����ֹͣ.\r\n�����쳣, ��رմ�ӡ��, ���Y��λ���غ�����.",
	"The bed will move backward to the Y endstop. Please\r\nobserve whether the bed stops immediately after\r\ntouching the endstop.\r\nIf there is an abnormality, please turn off the printer andcheck the Y endstop and cable.",
 	"���Į��Y��ߥåȥ����å��ޤ����ˤ��ޤ�.��ߥåȥ����å��ޤ����ˤ���ֱ������Į��ֹͣ���뤫�_�J���Ƥ�������.\r\n������������Ϥ�, �ץ�󥿤��Դ���Ф�, Y��ߥåȥ����å����侀��_�J���Ƥ�������.",
	"La cama se mover�� hacia atr��s hasta el tope final en Y. Observe si la cama se detiene inmediatamente despu��s de tocar el tope. Si hay alguna anomal��a, apague la impresora y compruebe el cable y el tope final en Y.",
    "Le lit recule jusqu'�� la but��e Y. Veuillez observer si le lit s'arr��te imm��diatement apr��s avoir touch�� la but��e. En cas d'anomalie, veuillez ��teindre l'imprimante et v��rifier la but��e en Y et le cable.",
    "Das Druckbett wird sich nach hinten an den Y-Endschalter bewegen. Bitte beobachten Sie, ob das Druckbett sofort bei Ber��hrung des Endschalters stoppt\r\nWenn Sie irgendeine Unregelmabigkeit feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den Y-Endschalter.",
    "Il letto si muover�� all'indietro fino al finecorsa Y. Si prega di osservare se il letto si ferma immediatamente dopo aver toccato il finecorsa. In caso di anomalie, spegnere la stampante e controllare il finecorsa Y e il cavo.",
    "het printbed beweegt naar achteren naa de achterste Y eindstop. Kijk of het printbed meteen stopt zodra deze de eindstop bereikt.\r\nSchakel als dat niet het geval is de printer meteen uit en controlleer de Y eindstop en kabel."
};

const char DIAG_PAGE10_TITLE[8][28] PROGMEM = {
	"7. Z������",
	"7. Z Motor Diagnosis",
 	"7. Z��`���`",
	"7. Con diagn��stico motor",
    "7. Avec diagnostic moteur",
    "7. Diagnose Z-Achsenmotor",
    "7. Mit Motordiagnose",
    "7. Z motor diagnose"
};

const char DIAG_PAGE10_LINE[8][315] PROGMEM = {
	"��ͷ���������ƶ�10cm, �������ƶ�5cm. ��۲���ͷ�ƶ��Ƿ�����.\r\n�����쳣, ��رմ�ӡ��, ���Z���������.",
	"The nozzle will first move up 10cm, and then move\r\ndown 5cm. Please observe whether the nozzle moves\r\nnormally.\r\nIf there is any abnormality, please turn off the printer\r\nand check the Z motor and cable.",
 	"�ץ��ȥإåɤ�10cm�ϕN��, �Τ�5cm�½����ޤ��ץ��ȥإåɤ������˄Ӥ����_�J���Ƥ�������������������Ϥ�, �ץ�󥿩`���Դ���Ф�, Z��`���`���侀��_�J���Ƥ�������.",
	"La boquilla se mover�� primero 10 cm hacia arriba y luego 5 cm hacia abajo. Observe si la boquilla se mueve normalmente. Si hay alguna anomal��a, apague la impresora y compruebe el motor Z y el cable.",
    "La buse montera d'abord de 10 cm, puis descendra de 5 cm. Veuillez observer si la buse se d��place normalement. En cas d'anomalie, veuillez ��teindre l'imprimante et v��rifier le moteur et le cable Z.",
    "Die D��sen werden sich um 10cm nach oben und danach um 5cm nach unten bewegen. Bitte beobachten Sie, ob die Bewegung normal und fl��ssig erfolgt.\r\nWenn Sie irgendeine Unregelmabigkeit bei der Bewegung feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den Z-Achsenmotor und das entsprechende Kabel.",
    "L'ugello si muover�� prima verso l'alto di 10 cm, quindi verso il basso di 5 cm. Si prega di osservare se l'ugello si muove normalmente. In caso di anomalie, spegnere la stampante e controllare il motore Z e il cavo.",
    "De printkop beweegt eerst 10cm omhoog en dan 5cm naar beneden. Kijk of de printkop normaal beweegt.\r\nSchakel als dat niet het geval is de printer meteen uit en controlleer de Z motor en kabel."
};

const char DIAG_PAGE11_TITLE[8][32] PROGMEM = {
	"8. �ӽ��������",
	"8. Proximity diagnostics",
 	"8. ���ӥ����å�",
	"8. Diagn��stico de proximidad",
    "8. Diagnostics de proximit��",
    "8. Diagnose Annaherungssensor",
    "8. Diagnostica di prossimit��",
    "8. Hoogte-sensor diagnose"
};

const char DIAG_PAGE11_LINE[8][280] PROGMEM = {
	"��۲���Ļ�Ͻӽ����ص�״̬�Ƿ�Ϊ�Ͽ�״̬. Ȼ����һ�����ƹ���, ���������˿��, �����ڽӽ����ص��·�. \r\n�۲���Ļ�Ͻӽ����ص�״̬�Ƿ��Ϊ��ͨ. �����쳣, ��رմ�ӡ��, �����ӽ�����.",
	"Look for an iron tool, such as a metal screwdriver, near the bottom of the proximity.\r\nWatch the status of the proximity changes from off\r\nto on. If abnormal, turn off the printer and replace the\r\nproximity.",
 	"�����Ϥν��ӥ����å���״�B���жϤ���Ƥ��ʤ����_�J��, ���ӥ����å����²��ˤ�������u�Υɥ饤�Щ`�ʤɤ���u�ι��ߤ�Ҋ�Ĥ���, �����Ϥν��ӥ����å���״�B����ͨ���뤫�ɤ�����_�J���ޤ�. \r\n������������Ϥ�, �ץ�󥿩`���Դ���Ф�, ���ӥ����å��򽻓Q���Ƥ�������.",
	"Busque una herramienta de hierro, como un destornillador de metal, cerca de la parte inferior de la proximidad. Observe el estado de los cambios de proximidad de apagado a encendido. Si es anormal, apague la impresora y reemplace la proximidad.",
    "Recherchez un outil en fer, comme un tournevis en m��tal, pr��s du bas de la proximit��. Regardez l'��tat des changements de proximit�� de d��sactiv�� �� activ��. En cas d'anomalie, ��teignez l'imprimante et remplacez la proximit��.",
    "Nehmen Sie ein metallenes Werkzeug wie z.B. einen Schraubendreher und nahern Sie sich damit dem Annaherungssensor.\r\nBeobachten Sie ob sich der Status des Sensors von AUS zu AN andert.\r\nSollte das nicht geschehen schalten Sie den Drucker aus und ersetzten Sie den Sensor. ",
    "Cerca uno strumento di ferro, come un cacciavite di metallo, vicino al fondo del vicinato. Guarda lo stato della prossimit�� cambia da spento ad acceso. Se anormale, spegnere la stampante e sostituire la prossimit��.",
    "Gebruik een metaal object, bijv. een schroevendraaier en breng deze in de buurt van de onderkant van de hoogte-sensor. \r\nKijk of de status van de hoogte-sensor verandert van Uit\r\nnaar Aan. Schakel de printer uit als dit niet het geval is en vervang de sensor."
};

const char DIAG_PAGE12_TITLE[8][48] PROGMEM = {
	"9. �󼷳���������",
	"9. Left extruder motor diagnosis",
 	"9. ���Ѻ���C��`���`",
	"9. Motor extrusor izquierdo",
    "9. Diagnostic du moteur d'extrudeuse gauche",
    "9. Diagnose linker Extrudermotor",
    "9. Diagnosi motore estrusore sinistro",
    "9. Linker motor diagnose"
};

const char DIAG_PAGE12_LINE[8][360] PROGMEM = {
	"�󼷳��������˳ʱ����ת2Ȧ����������ת2Ȧ. ��۲���ת���Ƿ�����.\r\n�����쳣, ��رմ�ӡ��, ����󼷳������������.",
	"The left extruder motor will rotate 2 times clockwise, and then 2 times counterwise. Please observe whether the motor rotates normally.\r\nIf anything is abnormal, please turn off the printer and\r\ncheck the left extruder motor and cable.",
 	"��Ѻ���C�Υ�`���`���rӋ�ؤ��2��, ���rӋ�ؤ��2�ػ�ܞ���ޤ�.��`���`�������˻�ܞ���뤫�_�J���Ƥ�������.\r\n������������Ϥ�, �ץ�󥿩`���Դ���Ф�, ��Ѻ���C�Υ�`���`���侀��_�J���Ƥ�������.",
	"El motor del extrusor izquierdo girar�� 2 veces en el sentido de las agujas del reloj y luego 2 veces en el sentido contrario. Observe si el motor gira normalmente. Si algo es anormal, apague la impresora y verifique el motor y el cable del extrusor izquierdo.",
    "Le moteur de l'extrudeuse gauche tournera 2 fois dans le sens des aiguilles d'une montre, puis 2 fois dans le sens inverse. Veuillez observer si le moteur tourne normalement. Si quelque chose est anormal, veuillez ��teindre l'imprimante et v��rifier le moteur et le cable de l'extrudeuse gauche.",
    "Der linke Extrudermotor wird sich 2 mal im Uhrzeigersinn und danach 2 mal gegen den Uhrzeigersinn drehen. Bitte beobachten Sie, ob sich der Motor normal und fl��ssig bewegt. \r\nWenn Sie irgendeine Unregelmabigkeit bei der Bewegung feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den Motor des linken Extruders und das entsprechende Kabel.",
    "Il motore dell'estrusore sinistro ruoter�� 2 volte in senso orario e poi 2 volte in senso antiorario. Si prega di osservare se il motore gira normalmente. In caso di anomalie, spegnere la stampante e controllare il motore e il cavo dell'estrusore sinistro.",
    "De linker extrusie motor draait 2 maal met de klok mee en 2 maal tegen de klok in. Kijk of de motor normaal beweegt\r\nAls dit niet het geval is, schakel de printer uit en controlleer de linker extrusie motor en kabel."
};

const char DIAG_PAGE13_TITLE[8][43] PROGMEM = {
	"10. ����ͷ������",
	"10. Diagnosis of left nozzle",
 	"10. ��Υ��륢����֥��",
	"10. Diagn��stico de la boquilla izquierda",
    "10. Diagnostic de la buse gauche",
    "10. Diagnose der linken D��se",
    "10. Diagnosi dell'ugello sinistro",
    "10. Linker printkop diagnose"
};

const char DIAG_PAGE13_LINE[8][266] PROGMEM = {
	"����ͷ��������60��. ��۲���Ļ�ϵ��¶���ֵ�Ƿ��������. ���¶���ֵ��ʱ���ޱ仯, �������رմ�ӡ��, ������ͷ���.",
	"The left nozzle will heat up to 60 degrees. Please\r\nobserve whether the temperature value on the screen\r\nrises rapidly.\r\nIf the value does not change for a long time, please\r\nturn off the printer immediately and replace the nozzle.",
 	"��ΥΥ����60�ȤޤǼӟᤵ��ޤ�.������¶Ȃ����������ϕN���뤫�ɤ�����_�J���Ƥ�������.\r\n�¶Ȃ����L�r�g�仯���ʤ����Ϥ�, �����˥ץ�󥿤��Դ���Ф�, �Υ��륢����֥�򽻓Q���Ƥ�������.",
	"La boquilla izquierda se calentar�� hasta 60 grados. Observe si el valor de temperatura en la pantalla aumenta r��pidamente. Si el valor no cambia durante mucho tiempo, apague la impresora inmediatamente y reemplace la boquilla.",
    "La buse gauche chauffera jusqu'�� 60 degr��s. Veuillez observer si la valeur de temp��rature sur l'��cran augmente rapidement. Si la valeur ne change pas pendant une longue p��riode, veuillez ��teindre l'imprimante imm��diatement et remplacer la buse.",
    "Die linke D��se wird sich auf 60 Grad aufheizen. Bitte beobachten Sie, ob sich die Temperaturanzeige am Display entsprechend und z��gig andert.\r\nSollte sich der Wert f��r langere Zeit nicht andern schalten Sie bitte den Drucker sofort aus und ersetzen Sie die D��se",
    "L'ugello sinistro si riscalder�� fino a 60 gradi. Si prega di osservare se il valore della temperatura sullo schermo aumenta rapidamente. Se il valore non cambia per molto tempo, spegnere immediatamente la stampante e sostituire l'ugello.",
    "De linker printkop wordt opgewarmd tot 60 graden. Controlleer of de temperatuur op het scherm snel omhoog gaat. Zet de printer uit als de temperatuur niet verandert en vervang dan onmiddellijk de printkop."
};

const char DIAG_PAGE13_LINE2[8][40] PROGMEM = {
	"������ͷ������ӿ�.",
	"Check the nozzle and cable",
 	"�Υ���ȥ��`�֥��_�J����",
	"Compruebe la boquilla y el cable",
    "V��rifiez la buse et le cable",
    "Pr��fen Sie D��se und Kabel",
    "Controllare l'ugello e il cavo",
    "Controlleer printkop en kabel"
};

const char DIAG_PAGE14_TITLE[8][53] PROGMEM = {
	"11. ����ͷ�������",
	"11. Diagnosis of left nozzle fan",
 	"11. ��Υ���ե����",
	"11. Diagn��stico del ventilador izquierdo",
    "11. Diagnostic du ventilateur de la buse gauche",
    "11. Diagnose des Bauteill��fters der linken D��se",
    "11. Diagnosi del ventilatore dell'ugello sinistro",
    "11. Linker printkop ventilator diagnose."
};

const char DIAG_PAGE14_LINE[8][256] PROGMEM = {
	"����ͷ�����ѿ���. �����δת��, ��رմ�ӡ���������ͷ����.",
	"The left nozzle fan is turned on. If the fan does not\r\nrotate, please turn off the printer and replace the fan.",
 	"��ȤΥΥ���ե��󤬥���ˤʤäƤ��ޤ�.�ե��󤬻�ܞ���ʤ����Ϥ�, �ץ�󥿤��Դ���Ф�, �Υ���ե���򽻓Q���Ƥ�������.",
	"El ventilador de la boquilla izquierda est�� encendido. Si el ventilador no gira, apague la impresora y reemplace el ventilador.",
    "La buse gauche chauffera jusqu'�� 60 degr��s. Veuillez observer si la valeur de temp��rature sur l'��cran augmente rapidement. Si la valeur ne change pas pendant une longue p��riode, veuillez ��teindre l'imprimante imm��diatement et remplacer la buse.",
    "Der linke Bauteill��fter wird eingeschaltet. Sollte sich der L��fter nicht drehen schalten Sie den Drucker ab und ersetzen Sie den L��fter.",
    "L'ugello sinistro si riscalder�� fino a 60 gradi. Si prega di osservare se il valore della temperatura sullo schermo aumenta rapidamente. Se il valore non cambia per molto tempo, spegnere immediatamente la stampante e sostituire l'ugello.",
    "De linker printkop ventilator staat aan. Als de ventilator niet draait, zet de printer uit en vervang de ventilator."
};

const char DIAG_PAGE15_TITLE[8][48] PROGMEM = {
	"12. �Ҽ�����������",
	"12. Right extruder motor diagnosis",
 	"12. ������Ѻ���C��`���`",
	"12. Motor extrusor izquierdo",
    "12. Diagnostic du moteur d'extrudeuse droit",
    "12. Diagnose rechter Extrudermotor",
    "12. Diagnosi motore estrusore destro",
    "12. Rechter extrusie motor diagnose"
};

const char DIAG_PAGE15_LINE[8][360] PROGMEM = {
	"�Ҽ����������˳ʱ����ת2Ȧ����������ת2Ȧ. ��۲���ת���Ƿ�����.\r\n�����쳣, ��رմ�ӡ��, ����Ҽ��������������.",
	"The right extruder motor will rotate 2 times clockwise,\r\nand then 2 times counterwise. Please observe whether\r\nthe motor rotates normally. If there is any abnormality,\r\nplease turn off the printer and check the right extruder motor and cable.",
 	"�ҤΥ������ȥ�`���`��`���`���rӋ�ؤ��2��, ���rӋ�ؤ��2��ܞ���ޤ�.��`���`�������˻�ܞ���뤫�_�J���Ƥ�������.\r\n������������Ϥ�, �ץ�󥿩`���Դ���Ф�, �������ȥ�`���`�Υ�`���`���侀��_�J���Ƥ�������.",
	"El motor de la extrusora derecho girar�� 2 veces en el sentido de las agujas del reloj y luego 2 veces en el sentido contrario. Observe si el motor gira normalmente. Si hay alguna anomal��a, apague la impresora y compruebe el motor y el cable de la extrusora correctos.",
    "Le moteur droit de l'extrudeuse tournera 2 fois dans le sens des aiguilles d'une montre, puis 2 fois dans le sens inverse. Veuillez observer si le moteur tourne normalement. S'il y a une anomalie, veuillez ��teindre l'imprimante et v��rifier le moteur et le cable de l'extrudeuse appropri��s.",
    "Der rechte Extrudermotor wird sich 2 mal im Uhrzeigersinn und danach 2 mal gegen den Uhrzeigersinn drehen. Bitte beobachten Sie, ob sich der Motor normal und ruckfrei bewegt. \r\nWenn Sie irgendeine Unregelmabigkeit bei der Bewegung feststellen, schalten Sie den Drucker sofort ab und pr��fen Sie den Motor des rechten Extruders und das entsprechende Kabel.",
    "Il motore dell'estrusore destro ruoter�� 2 volte in senso orario e poi 2 volte in senso antiorario. Si prega di osservare se il motore gira normalmente. In caso di anomalie, spegnere la stampante e controllare il motore e il cavo dell'estrusore corretti.",
    "De rechter extrusie motor draait 2 maal met de klok mee en 2 maal tegen de klok in. Kijk of de motor normaal beweegt\r\nAls dit niet het geval is, schakel de printer uit en controlleer de rechter extrusie motor en kabel."
};

const char DIAG_PAGE16_TITLE[8][40] PROGMEM = {
	"13. ����ͷ������",
	"13. Diagnosis of right nozzle",
 	"13. �������Υ��륢����֥��",
	"13. Diagn��stico de boquilla derecha",
    "13. Diagnostic de la buse droite",
    "13. Diagnose der rechten D��se",
    "13. Diagnosi dell'ugello destro",
    "13. Rechter printkop diagnose"
};

const char DIAG_PAGE16_LINE[8][266] PROGMEM = {
	"����ͷ��������60��. ��۲���Ļ�ϵ��¶���ֵ�Ƿ��������. ���¶���ֵ��ʱ���ޱ仯, �������رմ�ӡ��, ������ͷ���.",
	"The right nozzle will heat to 60 degrees. Please observe whether the temperature value on the screen rises rapidly. If the value does not change for a long time, please  turn off the printer immediately and replace the nozzle.",
 	"�҂ȤΥΥ��뤬60�Ȥ˼ӟᤵ��ޤ�.������¶Ȃ����������ϕN���뤫�ɤ�����_�J���Ƥ�������.�¶Ȃ����L�r�g�仯���ʤ����Ϥ�, �����˥ץ�󥿤��Դ���Ф�, �Υ��륢����֥�򽻓Q���Ƥ�������.",
	"La boquilla derecha se calentar�� a 60 grados. Observe si el valor de temperatura en la pantalla aumenta r��pidamente. Si el valor no cambia durante mucho tiempo, apague la impresora inmediatamente y reemplace la boquilla.",
    "La buse droite chauffera �� 60 degr��s. Veuillez observer si la valeur de temp��rature sur l'��cran augmente rapidement. Si la valeur ne change pas pendant une longue p��riode, veuillez ��teindre l'imprimante imm��diatement et remplacer la buse.",
    "Die rechte D��se wird sich auf 60 Grad aufheizen. Bitte beobachten Sie, ob sich die Temperaturanzeige am Display entsprechend z��gig andert.\r\nSollte sich der Wert f��r langere Zeit nicht andern schalten Sie bitte den Drucker sofort aus und ersetzen Sie die D��se",
    "L'ugello giusto si riscalder�� a 60 gradi. Si prega di osservare se il valore della temperatura sullo schermo aumenta rapidamente. Se il valore non cambia per molto tempo, spegnere immediatamente la stampante e sostituire l'ugello.",
    "De rechter printkop wordt opgewarmd tot 60 graden. Controlleer of de temperatuur op het scherm snel omhoog gaat. Zet de printer uit als de temperatuur niet verandert en vervang dan onmiddellijk de printkop."
};

const char DIAG_PAGE17_TITLE[8][55] PROGMEM = {
	"14. ����ͷ�������",
	"14. Diagnosis of right nozzle fan",
 	"14. �ҥΥ���ե����",
	"14. Diagn��stico del ventilador derecho",
    "14. Diagnostic du ventilateur de la buse droite",
    "14. Diagnose des Bauteill��fters der rechten D��se",
    "14. Diagnosi del ventilatore dell'ugello destro",
    "14. Rechter printkop ventilator diagnose"
};

const char DIAG_PAGE17_LINE[8][148] PROGMEM = {
	"����ͷ�����ѿ���. �����δת��, ��رմ�ӡ���������ͷ����.",
	"The right nozzle fan is turned on. If the fan does not\r\nrotate, please turn off the printer and replace the fan.",
 	"�҂ȤΥΥ���ե��󤬥���ˤʤäƤ��ޤ�.�ե��󤬻�ܞ���ʤ����Ϥ�, �ץ�󥿤��Դ���Ф�, �Υ���ե���򽻓Q���Ƥ�������.",
	"El ventilador de la boquilla derecha est�� encendido. Si el ventilador no gira, apague la impresora y reemplace el ventilador.",
    "Le ventilateur de buse droit est allum��. Si le ventilateur ne tourne pas, veuillez ��teindre l'imprimante et remplacer le ventilateur.",
    "Der rechte Bauteill��fter wird eingeschaltet. Sollte sich der L��fter nicht drehen schalten Sie den Drucker ab und ersetzen Sie den L��fter.",
    "La ventola dell'ugello destro �� attivata. Se la ventola non gira, spegnere la stampante e sostituire la ventola.",
    "De rechter printkop ventilator staat aan. Als de ventilator niet draait, zet de printer uit en vervang de ventilator."
};

const char DIAG_PAGE18_TITLE[8][40] PROGMEM = {
	"15. ƽ̨�������",
	"15. Heated bed diagnosis",
 	"15. �ӟ�٥åɤ�",
	"15. Diagn��stico de cama climatizada",
    "15. Diagnostic du lit chauffant",
    "15. Diagnose des Heizbettes",
    "15. Diagnosi letto riscaldato",
    "15. Verwarmd bed diagnose"
};

const char DIAG_PAGE18_LINE[8][278] PROGMEM = {
	"ƽ̨��������40��.  ��۲���Ļ�ϵ��¶���ֵ�Ƿ��������. ���¶���ֵ��ʱ���ޱ仯, �������رմ�ӡ��, ������ƽ̨������.",
	"The bed will heat up to 40 degrees. Please observe\r\nwhether the temperature value on the screen rises\r\nrapidly. If the value does not change for a long time,\r\nplease turn off the printer immediately and check the\r\nheated bed and cable.",
 	"�ץ�åȥե��`���40�ȤޤǼӟᤷ�ޤ�.������¶Ȃ����������ϕN���뤫�ɤ�����_�J���Ƥ�������.�¶Ȃ����L�r�g�仯���ʤ����Ϥ�, �����˥ץ�󥿤��Դ���Ф�, �ӟ�ץ�åȥե��`����侀��_�J���Ƥ�������.",
	"La cama se calentar�� hasta 40 grados. Observe si el valor de temperatura en la pantalla aumenta r��pidamente. Si el valor no cambia durante mucho tiempo, apague la impresora inmediatamente y compruebe la cama y el cable calefactados.",
    "The bed will heat up to 40 degrees. Please observe whether the temperature value on the screen rises rapidly. If the value does not change for a long time, please turn off the printer immediately and check the heated bed and cable.",
    "Das Druckbett wird sich auf 40 Grad aufheizen. Bitte beobachten Sie, ob sich die Temperaturanzeige am Display entsprechend z��gig andert.\r\nSollte sich der Wert f��r langere Zeit nicht andern schalten Sie bitte den Drucker sofort aus und pr��fen Sie das Heizbett und Kabel.",
    "Il letto si riscalder�� fino a 40 gradi. Si prega di osservare se il valore della temperatura sullo schermo aumenta rapidamente. Se il valore non cambia per molto tempo, spegnere immediatamente la stampante e controllare il piano riscaldato e il cavo.",
    "Het bed warmt op tot 40 graden. Kijk of de temperatuur op het scherm snel verandert. Als de waarde lang hetzelfde blijft, zet dan onmiddellijk de printer uit en controlleer verwarmd bed en kabel."
};

const char DIAG_PAGE18_LINE2[8][50] PROGMEM = {
	"�������ƽ̨������.",
	"Check the heated bed and cable.",
 	"�ӟ�ץ�åȥե��`��ȽӾA��_�J���Ƥ�������.",
	"Verifique la cama y el cable con calefacci��n",
    "Check the heated bed and cable.",
    "Pr��fen Sie das Heizbett und Kabel.",
    "Controllare il letto riscaldato e il cavo.",
    "Controlleer verwarmd bed en kabel"
};

#endif // 
