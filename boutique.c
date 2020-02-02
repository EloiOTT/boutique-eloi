#include <stdio.h>
#include <string.h>

struct Objet{
	char nomObjet[60];
	int prix;
	char caracteristique[300];
};
typedef struct Objet objet;


objet masse = {"gourdin du terrible Tømä", 25, "nul ne connait une arme aussi violente que ce gourdin titanesque. Si vous vous sentez l'âme d'un barbar sans merci, cette masse vous conviendra à merveille"};
objet epee = {"rapière du perfide Aeloi",20, "une relique qui pourrait s'apparenter à une simple lame, mais détrompez-vous, jeune bambin, celle-ci a goûtée au sang de bien trop d'abomination"};
objet sabre = {"lame en croc de kokeur",40, "quel animal est plus féroce que le kokeur? la réponse est pourtant si évidente : aucun. sa faim primordiale se ressent rien qu'en la regardant"};
objet cape = {"cape du Cèdre lubrique",10, "plutôt basique cette peau de loup! détrompez vous, malheureux, la furtivité qu'elle procure vous permettra de pouvoir observer votre proie pour mieux la connaître avant de l'attaquer"};
objet sac = {"sac égaré du perfide Antwan OG",30, "ce n'est pas qu'un simple sac, il possède en effet la faculté d'avoir un fond tellement énorme qu'on le surnome le sac des sombres cachoteries. Cette relique perdu pourrait bien changer la face du nord, mais elle sera plus en sécurité dans votre dos"};
objet fiole = {"brevage du loup solitaire Djühl le Pernicieux",5, "même si ce liquide impure augmente fortement votre force, faites attention à ne pas en abuser, ou votre âme pourrait devenir corrompus. et n'oubliez pas que ça veut le port d'arme, les gros bras de JCV"};


int main(){

    int choix ;
    int achat ;
    int argentDuJoueur = 80;

	int masse1 = 0;
	int epee1 = 0;
	int sabre1 = 0;
	int cape1 = 0;
	int sac1 = 0;
	int fiole1 = 0;


    printf("bienvenue dans la tanière lugubre, jeune âme égarée. Ici vous pouvez effectuer divers achats selon votre bon désir. \n En bref, vous allez vous ruiner mais en vrai ça vaux le coup. Un peu. \n");
    printf("solde : %d\n", argentDuJoueur);

   while (argentDuJoueur > 0){

    printf("alors, qu'es que je lui sert? \n [1] acheter \n [2] inventaire \n [3] vendre");
    scanf("%d", &choix);

    if (choix == 1){
    	printf("ta bourse m'a l'air encore bien trop rempli \n");
    	printf(" [1] %s | %d | %s \n", masse.nomObjet, masse.prix, masse.caracteristique);
    	printf(" [2] %s | %d | %s \n", epee.nomObjet, epee.prix, epee.caracteristique);
    	printf(" [3] %s | %d | %s \n", sabre.nomObjet, sabre.prix, sabre.caracteristique);
    	printf(" [4] %s | %d | %s \n", cape.nomObjet, cape.prix, cape.caracteristique);
    	printf(" [5] %s | %d | %s \n", sac.nomObjet, sac.prix, sac.caracteristique);
    	printf(" [6] %s | %d | %s \n", fiole.nomObjet, fiole.prix, fiole.caracteristique);

    		scanf("%d", &achat);

    		if (achat == 1){
    			printf("très bon choix! \n");
    			argentDuJoueur = argentDuJoueur - masse.prix;
				masse1 = masse1 + 1;
    			printf("solde : %d\n", argentDuJoueur);
    		}

    		if (achat == 2){
    			printf("ahh vous avez l'oeil! \n");
    			argentDuJoueur = argentDuJoueur - epee.prix;
				epee1 = epee1 + 1;
    			printf("solde : %d\n", argentDuJoueur);
    		}

    		if (achat == 3){
    			printf("excellent... \n");
    			argentDuJoueur = argentDuJoueur - sabre.prix;
				sabre1 = sabre1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}

    		if (achat == 4){
    			printf("je vois que j'ai affaire à un professionnel \n");
    			argentDuJoueur = argentDuJoueur - cape.prix;
				cape1 = cape1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}

    		if (achat == 5){
    			printf("excusez-moi, je me suis perdu dans votre regard rempli d'inelligence \n");
    			argentDuJoueur = argentDuJoueur - sac.prix;
				sac1 = sac1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}

    		if (achat == 6){
    			printf("je suis moins sûr là... m'enfin bon, comme tu voudras \n");
    			argentDuJoueur = argentDuJoueur - fiole.prix;
				fiole1 = fiole1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}
	}


		if (choix == 2){
		printf("inventaire : \n %d %s \n", masse1, masse.nomObjet);
		printf("\n %d %s \n", epee1, epee.nomObjet);
    	printf("\n %d %s \n", sabre1, sabre.nomObjet);
    	printf("\n %d %s \n", cape1, cape.nomObjet);
    	printf("\n %d %s \n", sac1, sac.nomObjet);
    	printf("\n %d %s \n", fiole1, fiole.nomObjet);
	}

		}

		if (argentDuJoueur <= 0){
			printf("ah, il est 14h, c'est l'apéro! A la revoyure ou un truc comme ça \n");
		}

    return 0;
}
