# Programiranje za prvi razred obrazovnog profila Elektrotehničar informacionih tehnologija
Ovaj repozitorijum posvećen je kursu za Programiranje za prvi razred obrazovnog profila Elektrotehničar informacionih tehnologija



## Konfirugacija okružena 

Prvo klonirajte repozitorijum https://github.com/Petlja/etit1_prog. Ako nemate iskustva sa Git-om preporučujemo da koristite GitHub desktop (https://desktop.github.com/).

Preporučujemo da koristite editor VS Code (https://code.visualstudio.com/). Možete koristiti i drugi editor, u kom slučaju ono što objašnjavamo kako se radi u VS Code računamo da znate kako da uradite u editoru koji koristite.

Ukoliko nemate instaliran Python (https://www.python.org/) u verziji 3.10 ili novijoj, instalirajte ga. 

Instalirajte VS Code, ukoliko ga već nemate instaliranog i ukoliko se niste opredelili da koristite drugi editor. U VS Code podesite da se kao terminal koristi *cmd.exe*, tako tako što odete u *File -> Preferences -> Settings* pa u polju za pretragu unesete *terminal.external.windowsExec* i postavite vrednost opcije na *C:\WINDOWS\System32\cmd.exe* .

Otvorite Windows komandni prozor i pozicionirajte se u folder projekta (folder u kome ste klonirali gore navedeni repozitorijum). Izvršite komande

```
py -m venv .venv
venv\Scripts\activate.bat
python -m pip install -r requirements.txt
code .
```

Poslednjom komandom se pokrenuli VS Code. U Explorer panelu VS Code-a uđite u folder source i otvorite `conf.py`. Ne morate ništa da radite u `conf.py`‚ otvorili ste ga samo da VS Code shvati da treba da konfiguriše Python. Verovatno će vam preporučiti da instalirate ekstenziju za Python što možete prihvatiti. Ako je sve prošlo kako treba, u desnom delu status bar-a (linija na dnu VS Code prozora) će stajati nešto poput `3.10.11 ('.venv':venv)` što je opis aktivnog Python okruženja. Oznaka verzije može da se razlikuje ali ovo što piše u zagradi treba da bude tako. Ako nije, kliknite na to mesto u status bar-u i izaberite Python okruženje koje se nalazi u `.venv` podfolderu vašeg projekta (a koje ste prethodnim komandama kreirali). Obratite pažnju da je potrebno da u editoru imate otvoren `conf.py` da biste u status bar-u videli koje okruženje Pajtona je aktivno. 

Sada možete da zatvorite komandni prozor i pređete da koristite terminal u okviru VS Code. Ako koristite drugi editor koji ne podržava integrisani terminal možete da ostavite otvoren komandni prozor i u njemu unosite komande.

U VS Code otvorite terminal, ukoliko već nije otvoren, opcijom *Terminal -> New Terminal*. U posebnom panelu u VS Code prozoru će se otvoriti terminal i u njemo treba da bude ispisam prompt koji počinje sa `(.venv)`. 


U terminalu otkucajte komandu:

```
make html
```

Zatim otvorite u brauzeru fajl `index.html` koji se nalazi u podfolderu `build/html`, a što u terminalu možete učiniti komandom (ako koristite Chrome):

```
start chrome file://%cd%/build/html/index.html 
```

Ako vidite početan sadržaj onda je konfiguracija okruženja uspela.

## Ponovno bildovanje HTML strana nakon unetih izmena

Kada god unesete neke izmene, HTML strane možete ponovo buildovati već ranije pomenutom komandom u terminalu:

```
make html
```

Ne zaboravite da snimite promene u editoru pre nego što pokrenete pretodnu komandu.

Pokretanje prethodne komande obično ispiše dosta nekih informacija. Obratite pažnju da li je ispisana neka poruka crvenom bojom i ako jeste ispravite šta treba pa ponovite prethodnu komandu.

Ako ste zaboravili gde se nalazi generisan HTML, poslednja linija u ispisanim porukama govori o tome.

Ako vam je već otvoren kurs u brauzeru, dovoljno je da osvežite prikaz u brauzeru da biste videli promene. Može se desiti da se promena ne prikaže onako kako očekujete. U tom slučaju prvo proverite da li ste snimili promene, da li je bilo poruka o grešci kod buildovanja, pa onda probajte Ctrl-Shift-R u brauzeru i ako ni to ne uspe, uradite:

```
make clean
make html
```

i nakon toga Ctrl-Shift-R u brauzeru.

Ne zaboravite da pre početka i na kraju rada na sadržaju sinhronizujete Git repozitorijum.


## Instrukcije za izradu sadržaja

Ovde koristimo Sphinx generator dokumentacije u varijanti sa Markdown sintaksom. To znači da su svi tekstualni sadržaji su u fajlovima sa ekstenzijom `.md`.  

Izvorni sadržaj kursa je u podfolderu `source`. Za svaki izvorni Markdown dokument će se na kraju kreirati jedna web strana. Dokumenti su hijerarhijski organizovani. Na vrhu hijerarhije je glavni `index.md`, sledeći u hijerarhiji su `index.md` fajlovi u podfolderima i na kraju su ostali falnovi u podfolderima. Treba se držati navedenih nivoa hijerarhije i ne uvoditi dodatne. 

Za više detalja o notaciji koju koristite pri unosu teksta možete pogledati:

- [Markedly Structured Text](https://myst-parser.readthedocs.io/en/latest/index.html) - Tu je opisano kako se koristi Sphinx sa Markdown-om, mada nisu opisane sve Sphinx komponente
- [Sphinx direktive](https://www.sphinx-doc.org/en/master/usage/restructuredtext/directives.html), [Sphinx role](https://www.sphinx-doc.org/en/master/usage/restructuredtext/roles.html), [Docutils direktive](https://docutils.sourceforge.io/docs/ref/rst/directives.html) i [Docutils role](https://docutils.sourceforge.io/docs/ref/rst/roles.html) daju detaljnije informacije o osnovnom skupu raspoloživih komponenti, pri čemu se u navedenim dokumentima koristi reStructuredText sintaksa, pa se treba navići kako istu stvar napisati u Markdaun sintaksi. Pošto je Sphinx nadogradnja Docutils-a, u Sphinx dokumentaciji se opisuju samo direktive i role koje je dodao Sphinx, pa treba kombinovati Docutils i Sphinx dokumentaciju.
- [Ekstenzija sphinx-design](https://sphinx-design.readthedocs.io/en/latest/index.html) definiše skup dodatnih komponenti koje koristimo. U dokumentaciji ekstenzije se paralelno prikazuje Markdown i reStructuredText (RST) sintaksa, pa se može uočiti kako se RST prevodi u Markdown. 

Kroz primere iz gore navedene dokumentacije ćete primetiti da i Markdown ima dve varijante sintaksi za direktive: sa višestrukom obrnutim apostrofima i sa višestrukim dvotačkama. Osim retkih izuzetaka, istu stvar možemo da zapišemo i na jedan i na drugi način. 

Mi smo se, za sada, primarno opredelili za sintaksu sa obrnutim apostrofima ali ćemo tu odluku možda promeniti jer je kod takvih izbora najvažnije šta na kraju preovlada i ima bolju podršku alata.
