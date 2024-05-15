#include "Zoo.h"


int main() {
    Zoo zoo(7);
    zoo.VytvoritVyběh(0, 2);
    zoo.VytvoritVyběh(1, 2);
    zoo.VytvoritVyběh(2, 3);
    zoo.VytvoritVyběh(3, 3);
    zoo.VytvoritVyběh(4, 7);
    zoo.VytvoritVyběh(5, 2);
    zoo.VytvoritVyběh(6, 3);
    zoo.VytvoritVyběh(7, 1);

    zoo.PridatZvireDoVyběhu(0, new Vsezravec("Prase", "samec", 200, 120));
    zoo.PridatZvireDoVyběhu(0, new Vsezravec("Prase", "samice", 150, 100));

    zoo.PridatZvireDoVyběhu(1, new Bylozravec("Nosorozec", "samec", 3000, 180));
    zoo.PridatZvireDoVyběhu(1, new Bylozravec("Nosorozec", "samec", 2000, 120));

    zoo.PridatZvireDoVyběhu(2, new Masozravec("Puma", "samice", 130, 90));
    zoo.PridatZvireDoVyběhu(2, new Masozravec("Puma", "samec", 150, 100));
    zoo.PridatZvireDoVyběhu(2, new Masozravec("Puma", "samice", 120, 80));
    zoo.PridatZvireDoVyběhu(2, new Masozravec("Puma", "samec", 120, 100));

    zoo.PridatZvireDoVyběhu(3, new Vsezravec("Hroch", "samec", 3500, 200));
    zoo.PridatZvireDoVyběhu(3, new Vsezravec("Hroch", "samice", 3600, 210));
    zoo.PridatZvireDoVyběhu(3, new Vsezravec("Hroch", "samice", 3400, 195));

    zoo.PridatZvireDoVyběhu(4, new Bylozravec("Zebra", "samec", 400, 180));
    zoo.PridatZvireDoVyběhu(4, new Bylozravec("Zebra", "samice", 450, 170));
    zoo.PridatZvireDoVyběhu(4, new Bylozravec("Zebra", "samec", 430, 175));
    zoo.PridatZvireDoVyběhu(4, new Bylozravec("Zebra", "samice", 420, 180));
    zoo.PridatZvireDoVyběhu(4, new Bylozravec("Zebra", "samec", 400, 170));
    zoo.PridatZvireDoVyběhu(4, new Bylozravec("Zirafa", "samec", 1500, 470));
    zoo.PridatZvireDoVyběhu(4, new Bylozravec("Zirafa", "samice", 1400, 450));

    zoo.PridatZvireDoVyběhu(5, new Bylozravec("Slon", "samice", 5500, 225));
    zoo.PridatZvireDoVyběhu(5, new Bylozravec("Slon", "samec", 5600, 240));

    zoo.PridatZvireDoVyběhu(6, new Bylozravec("Kralik", "samice", 2, 25));
    zoo.PridatZvireDoVyběhu(6, new Bylozravec("Kralik", "samice", 3, 30));

    zoo.PridatZvireDoVyběhu(7, new Masozravec("Holub", "samice", 1, 20));


    zoo.VypisZvirataVeVyběhu(0);
    zoo.VypisZvirataVeVyběhu(1);
    zoo.VypisZvirataVeVyběhu(2);
    zoo.VypisZvirataVeVyběhu(3);
    zoo.VypisZvirataVeVyběhu(4);
    zoo.VypisZvirataVeVyběhu(5);
    zoo.VypisZvirataVeVyběhu(6);
    zoo.VypisZvirataVeVyběhu(7);

    Obsluha* O1 = new Obsluha("Jan Novak", "obsluha", "Vybeh 0");
    O1->ZmenVybeh("Vybeh 1");
    zoo.PridatZamestnance(0, O1);

    Obsluha* O2 = new Obsluha("Jan Slovak", "obsluha", "Vybeh 4");
    O2->ZmenVybeh("Vybeh 5");
    zoo.PridatZamestnance(1, O2);

    Obsluha* O3 = new Obsluha("Jan Kotal", "obsluha", "Vybeh 0");
    O3->ZmenVybeh("Vybeh 6");
    zoo.PridatZamestnance(2, O3);

    zoo.VypisZamestnance(0);
    zoo.VypisZamestnance(1);
    zoo.VypisZamestnance(2);

    return 0;
}
