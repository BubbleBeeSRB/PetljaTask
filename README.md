# Petlja zadatak - template

Ovaj repozitorijum sadrzi format Petlja zadatka sa svim mogucim opcijama.

Postoje 3 tipa zadataka:
- `standard` Takmičar treba da pošalje jedan fajl koji se kompajlira u odgovarajućem programskom jeziku i pokreće na svim test primerima. Rezultat se računa na osnovu upoređivanja očekivanog izlaza i izlaza koji je proizveo takmičarski kod (upotrebom odgovarajuceg checker-a).
- `output` Takmičar treba da pošalje izlazne fajlove koji se ocenjuju upotrebom checker-a.
- `customcompiled` Autora zadatka ima mogucnost da konfigurise nacin na koji se zadatak kompajlira. Prva ideja je da se koristi za zadatke u kojima takmicar implementira jednu ili vise funkcija u odgovarajucem programskom jeziku. Ove funkcije se importuju u kod koji autor implementira. **Nije jos uvek podrzano.**

Opis strukture:
- `example-config.yml` - konfiguracija zadatka
- `example-st.md` i/ili `example-st.pdf` - (jedno od je obavezno) tekst zadatka
- `example-sol.md` ili `example-sol.pdf` - (opciono) opis resenja zadatka
- `example-check.cpp` - (obavezno ako je checker custom) checker za zadatak, podrzane ekstenzije su cpp i cs
- `example-tgen.cpp` - (opciono) generator test primera
- `compile/` - videti README u folderu
- `media/` - videti README u folderu
- `solutions/` - videti README u folderu
- `templates/` - videti README u folderu
- `testcases/` - videti README u folderu
