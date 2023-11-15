typedef struct  contato Contato;
typedef struct  etiquetas Etiqueta;

Contato *atribuir (int QtdContatos);
void imprimir (Contato *contatos, int QtdContatos);
void adicionar_etiqueta (Contato *contato, int QtdContatos, int numero);
void atualizar_numero (Contato *contato, int QtdNumeros);

