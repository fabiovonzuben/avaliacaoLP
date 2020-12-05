#define T 10

//tipo ponteiro pra evitar consumo desnecessario de memoria
typedef struct Produto *pProduto;

pProduto vProduto[T];

typedef struct Carrinho *pCarrinho;

pCarrinho vCarrinho[T];

//struct Carrinho;

void inicializar();

void CriarProduto(int p);

void AdicionarProdutos(int j);

void ListarProdudtos();



