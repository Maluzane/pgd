
 #include<stdio.h>

void main(){

    /*...
*/
int disponivel,Menu,cadastrado;
			// mostra a primeira mensagem
    printf("bem vindo ao Moz Eletronicos\n");
    printf("verifique o produto\n");
    scanf("%d",&disponivel); 
    	//pede o pin do sistema que e 1111
        if(disponivel == disponivel){
        	// digitado o pin certo
            printf("disponivel\n");
            
            //menu das opcoes
            printf("====================================\n");
            printf("Menu\n");
            printf("senha 1\n");
            printf("senha 2\n");
            printf("senha 3\n");
            printf("senha 4\n");
            printf("senha 5\n");
            printf("6 - Sair\n");
            scanf("%d",&Menu);
            
            switch(Menu)
            {
            	
            	// senha 1 cliente direcionado a fila e depois ao attendimento
            case 1:
				printf("opcao escolhida e: senha1\n");
					printf("atendimento\n");
				
					
			
				
				
				
				
				break;
				// senha numero 2 direcionado a fila e depois atendimento
				
				
			case 2:
				printf("senhha2\n");
				printf("atendimento\n ");
	
				
				break;
				
				
				
				
			case 3:
				// no caso 3 o cliente adquiree a senha3 direcionado a fila depois atendimento
				
				printf("senha 3\n");
				printf("atendimento\n");
				break;			
            	
            	
            	
            case 4:
            	
            	
            	// no caso 4 o cliente adquire a senha 4 e e direcionado ao atendimento
				printf("senha4\n");
				printf("atendimento\n");
				                      
				
			
				break;
		}
	}

        

        














































}
