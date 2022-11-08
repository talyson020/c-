#include <iostream>
using namespace std;
int main(){

    int i;
    string alunos[5];
    float av1[5],av2[5], media[5];
    float menorMedia=10;
    float maiorMedia=0;
    float mediaGeral=0;

    for(i=0; i<5; i++) {
        cout<<"Digite seu nome: ";
        cin>>alunos[i];
        cout<<"Digite sua av1: ";
        cin>>av1[i];
        cout<<"Digite sua av2: ";
        cin>>av2[i];
        media[i] = (av1[i] + av2[i]) / 2;

    }
    for(i=0; i<5; i++) {
        if(media[i]>maiorMedia){
            maiorMedia=media[i];
        }
        if(media[i]<menorMedia){
            menorMedia=media[i];
        }
        mediaGeral=mediaGeral+media[i] /5;

        cout<<alunos[i]<<"\n Av1: "<<av1[i]<<"\n Av2: "<<av2[i]<<"\n Média: "<<media[i]<<endl;

    }
    cout<<"\nA maior média é: "<<maiorMedia;
    cout<<"\nA menor média é: "<<menorMedia;
    cout<<"\nA média geral é: "<<mediaGeral;

    return 0;
}
