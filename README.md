# ft\_printf

> 42cursus | Libft Expansion | 100% passed | Norminette OK ✅

## 📌 Descrição

Este projeto tem como objetivo recriar a função printf da biblioteca padrão do C. A função `ft_printf` deve formatar e imprimir uma string de acordo com especificadores de formato, sem utilizar `printf`, `sprintf`, `asprintf`, `snprintf`, `vprintf`, `vsprintf`, `vasprintf`, `vsnprintf` ou funções relacionadas.

## 🧠 Conceitos trabalhados

* Manipulação de strings
* Conversão de tipos
* Números em base decimal e hexadecimal
* Uso de ponteiros
* Escrita em file descriptor (write)
* Modularização de código
* Alocação dinâmica de memória

## 📂 Estrutura do projeto

```
ft_printf/
├── ft_printf.c         # Função principal com parsing
├── ft_utils.c           # Funções auxiliares (strlen, putnbr, etc.)
├── ft_convert.c        # Impressão de cada tipo: c, s, d, i, u, x, X, p
├── ft_putchar.c       # Impressão de caracteres isolados
├── includes/
│   └── ft_printf.h       # Header com protótipos e includes
└── Makefile
```

## 🛠️ Compilando o projeto

```bash
make
```

## 🚀 Usando o ft\_printf

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d, Hex: %x\n", "world", 42, 42);
    return (0);
}
```

### Formatos implementados:

* `%c` : caractere
* `%s` : string
* `%d` : inteiro decimal
* `%i` : inteiro decimal
* `%u` : inteiro decimal sem sinal
* `%x` : hexadecimal minúsculo
* `%X` : hexadecimal maiúsculo
* `%p` : ponteiro
* `%%` : imprime `%`

## 🧪 Prints dos testes

![Screenshot from 2025-05-03 17-52-38](https://github.com/user-attachments/assets/93e0a623-5207-4543-8b6e-80b1df17b88e)

## ✅ Norminette

* Todas as funções seguem a [Norminette da 42](https://github.com/42School/norminette)
* Nenhuma função proibida foi utilizada
* Divisão de arquivos mantida clara, modular e com menos de 25 linhas sempre que possível

## 👤 Autor

**Lucas C. M. Lima**
42 Lisboa - Estudante de Full Stack Development
Email: [lucascml.dev@outlook.com](mailto:lucascml.dev@outlook.com)
GitHub: [lucascml](https://github.com/lucascml)

---

Caso deseje testar, basta executar o binário com exemplos variados e comparar a saída com a do printf original. Todos os testes passam ✅

---

> "Build your printf, build your foundations."
