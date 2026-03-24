
typedef struct{
    int num;
    char type[10];
    char etat[10];
    }wagon;

struct cellule{
    wagon wg;
    struct cellule *ls;
};

struct cellule *ajout(struct cellule *train);
struct cellule *que(struct cellule *train);
int chercher(struct cellule *train,int id);
void afficher(struct cellule *train);
int check(struct cellule *train,int id);
