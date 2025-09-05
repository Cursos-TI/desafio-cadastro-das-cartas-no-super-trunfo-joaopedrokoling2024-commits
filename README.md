# Super Trunfo - Países 

Este repositório contém a implementação do desafio *Super Trunfo - Países* em linguagem C, dividido em três níveis de dificuldade: *Novato, **Aventureiro* e *Mestre*.

---

##  Nível Novato: Cadastro Básico
No nível Novato, o objetivo é cadastrar *duas cartas* com os seguintes atributos:

- População (int)
- Área (float)
- PIB (float)
- Número de pontos turísticos (int)

### Funcionalidades:
- O usuário insere os dados manualmente via scanf.
- O programa exibe os dados cadastrados usando printf.
- *Restrição:* Não usar for, while ou if.

 Arquivo: nivel_novato.c

---

##  Nível Aventureiro: Cálculo de Atributos
Expansão do nível Novato, com cálculo automático de dois novos atributos:

- *Densidade Populacional* = População ÷ Área (float)
- *PIB per Capita* = PIB ÷ População (float)

### Funcionalidades:
- O usuário continua cadastrando duas cartas.
- O sistema calcula automaticamente a densidade populacional e o PIB per capita.
- Os novos atributos são exibidos junto com os demais.
- *Restrição:* Não usar for, while ou if.

 Arquivo: nivel_aventureiro.c

---

##  Nível Mestre: Comparação e Super Poder
Neste nível, além dos cálculos do Aventureiro, são adicionadas as comparações entre cartas e o cálculo do *Super Poder*.

### Novos Recursos:
- *Comparação de atributos:*  
  - Exibe 1 se a Carta 1 venceu e 0 se a Carta 2 venceu.
  - Para *Densidade Populacional* vence o *menor valor*.
  - Para os demais atributos e Super Poder vence o *maior valor*.

- *Super Poder:*  
  - Soma de todos os atributos (inclusive calculados).
  - A densidade populacional é considerada *invertida* (1 / densidade) antes da soma.
  - Tipo: float.

### Alterações:
- A *População* agora é unsigned long int (para suportar valores grandes).

 Arquivo: nivel_mestre.c

---

##  Como compilar e executar
No terminal, use os seguintes comandos:

### Compilar:
```bash
gcc nivel_novato.c -o novato
gcc nivel_aventureiro.c -o aventureiro
gcc nivel_mestre.c -o mestre
