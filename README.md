# Petlja zadatak - template

Ovaj repozitorijum sadrzi template strukturu za razlicite tipove zadataka na Petlji.

Postoje 3 tipa zadataka:
- `standard` Takmičar treba da pošalje jedan fajl koji se kompajlira u odgovarajućem programskom jeziku i pokreće na svim test primerima. Rezultat se računa na osnovu upoređivanja očekivanog izlaza i izlaza koji je proizveo takmičarski kod (upotrebom odgovarajuceg checker-a).
- `output` Takmičar treba da pošalje izlazne fajlove koji se ocenjuju upotrebom checker-a.
- `customcompiled` Autora zadatka ima mogucnost da konfigurise nacin na koji se zadatak kompajlira. Prva ideja je da se koristi za zadatke u kojima takmicar implementira jednu ili vise funkcija u odgovarajucem programskom jeziku. Ove funkcije se importuju u kod koji autor implementira. **Nije jos uvek podrzano.**

Greske u obaveznim fajlovima dovode do neuspesnog importovanja. Greske u opcionim fajlovima rezultuju ignorisanjem tih fajlova (kao da ne postoje).

Opis strukture:
- `default/` (nije deo strukture) - predstavlja default zadatak koji se dobije nakon kreiranja zadatka kroz dashboard i export-a
- `example-meta.yml` (obavezno) - meta podaci o zadatku
- `example-st.md` (obavezno) - tekst zadatka
- `example-tests.yml` (obavezno) - podesavanja za testiranje
- `example-check.cpp` (obavezno ako je checker custom) - checker za zadatak, podrzane ekstenzije su cpp i cs
- `example-testgen.cpp` (opciono) - generator test primera
- `testcases/` (obavezno ako ne postoji testgen ili se zadatak uploaduje online) - test primeri
- `example-sol.md` (opciono) - opis resenja zadatka
- `example-solutions.yml` (opciono) - podesavanja za validaciju resenja
- `solutions/` (opciono) - resenja zadatka
- `templates/` (opciono) - folder sadrzi sablone ciji se sadrzaj ucitava u online editor
- `compile/` (obavezno samo za customcompiled tip zadatka) TODO: Objasniti kada tip bude podrzan.
