#include <iostream>
#include <string>

using namespace std;

void f_jarda(float stred; int patro){

int i = 0;



}
int main()
{
    struct znak {
        int cetnost_absolutni;
        float cetnost_relativni;
        float cetnost_kumulativni;
        int poradi;maxi_poradi
        char ascii_znak;
        int ascii_poradi;
    };
    znak znaky[256];
    znak znaky_serazene[256];
    for(int i=0; i<256; i++)
    {
        znaky[i].cetnost_absolutni = 0;
        znaky[i].cetnost_relativni = 0;
        znaky[i].cetnost_kumulativni = 0;
        znaky[i].poradi = 0;
        znaky[i].ascii_znak = (char) i;
        znaky[i].ascii_poradi = i;
        znaky_serazene[i].cetnost_absolutni = 0;
        znaky_serazene[i].cetnost_relativni = 0;
        znaky_serazene[i].cetnost_kumulativni = 0;
        znaky_serazene[i].poradi = 0;
        znaky_serazene[i].ascii_znak = (char) i;
        znaky_serazene[i].ascii_poradi = i;
    }
    cout << "Zadejte vetu: ";
    string input;
    getline(cin, input);
    cout << endl;
    cout << "Prohledavany text:" << endl << input;
    cout << endl << endl << "Hledani cetnosti podle tabulky ASCII:" << endl << endl;

    for(int i = 0; i < input.length(); i++)
    {
        znaky[(int)input[i]].cetnost_absolutni++;
        znaky[(int)input[i]].cetnost_relativni = (float)znaky[(int)input[i]].cetnost_absolutni/input.length();
    }
    for(int i = 0; i < 256; i++){

        znaky[(int)input[i]].cetnost_kumulativni = znaky[(int)input[i-1]].cetnost_kumulativni + znaky[(int)input[i]].cetnost_relativni;

    }
    int pocitadlo_poradi = 1;
    for (int i = 0; i < 256; i++)
    {
        int maxi = 0;
        int maxi_poradi = 0;
        for (int j = 0; j < 256; j++)
        {
            if(!znaky[j].poradi && znaky[j].cetnost_absolutni > maxi)
            {
                maxi = znaky[j].cetnost_absolutni;
                maxi_poradi = j;
            }
        }
        znaky[maxi_poradi].poradi = pocitadlo_poradi;
        znaky_serazene[pocitadlo_poradi] = znaky[maxi_poradi];
        pocitadlo_poradi++;
    }

    f_jarda(0,5, );
    for(int i=0; i<256; i++)
    {
        if(znaky_serazene[i].cetnost_absolutni){
        cout << (char)i << "  " << znaky_serazene[i].cetnost_absolutni << "  " << znaky_serazene[i].cetnost_relativni << "  " << znaky_serazene[i].poradi
             << "  " << znaky_serazene[i].cetnost_kumulativni << endl;
        }
    }


/*    struct lide{
        string jmeno;
        string primeni;
        int vek;
    };
    lide kryspin = {
        "Kryspin",
        "Kryspinovic",
        17
    };
    cout << kryspin.jmeno << " " << kryspin.primeni << " " << kryspin.vek << endl;
    lide lidi[3];
    for(int i=1; i<=3; i++){
        cout << "Zadejte jmeno: " << endl;
        cin >> lidi[i-1];
        cout << "Zadejte primeni: " << endl;
        cin >> lidi[i-1];
        cout << "Zadejte vek: " << endl;
        cin >> lidi[i-1];
    }
    for(int i = 1; i<=3; i++){
        cout << lidi[i-1].jmeno << " " << lidi[i-1].primeni << " " << lidi[i-1].vek << endl;
    }


    cout << "Zadejte vetu: ";
    string input;
    getline(cin, input);
    */

    /****NE ASCII TABULKA****/

    /*

    int misto_v_databazi = 0;
    char databaze_znaku[input.length()];

    for(int i=0; i< input.length(); i++)
    {
        int v_databazi = 0;

        for(int j=0; j<input.length(); j++)
        {
            if(databaze_znaku[j] == input[i])
            {
                v_databazi = 1;
            }
        }

        if(v_databazi == 0)
        {
            databaze_znaku[misto_v_databazi] = input[i];
            misto_v_databazi++;
        }
    }

    cout << endl << endl << "Hledani cetnosti podle zadanych znaku:" << endl;

    for(int i=0; i <= misto_v_databazi; i++)
    {
        if(databaze_znaku[i] != 0)
        {
            int pocet = 0;

            for(int j=0; j<input.length(); j++)
            {
                if(input[j] == databaze_znaku[i]) pocet++;
            }

            if(pocet != 0)
            {
                cout << "Pocet znaku '" << databaze_znaku[i] << "' je: " << pocet << endl;
            }
        }
    }

    */

    /****ASCII TABULKA****/
    /*
    int cetnost[256];
    float relativni_cetnost[256];

    for(int i=0; i<256; i++)
    {
        cetnost[i]=0;
    }

    cout << endl << endl << "Hledani cetnosti podle tabulky ASCII:" << endl;

    for(int i=0; i<input.length(); i++)
    {
        cetnost[int(input[i])]++;
    }

    for(int i=0; i<256; i++)
    {
        relativni_cetnost[i] = (float)cetnost[i]/input.length();
        if(cetnost[i]){
                cout << char(i) << "  " << cetnost[i] << "  " << relativni_cetnost[i] << endl;
        }

    }*/
    cout << endl << "abeceda";
    return 0;
}
