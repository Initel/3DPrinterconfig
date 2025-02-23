# **Configurações do Marlin para Impressora 3D DIY (RAMPS 1.4 + Arduino Mega)**

Este repositório contém os arquivos de configuração do firmware Marlin otimizados para uma impressora 3D customizada, montada com uma placa RAMPS 1.4 e um Arduino Mega 2560.

## 🔧 Sobre a Impressora
Esta impressora 3D foi projetada e construída do zero, utilizando uma estrutura personalizada e componentes configurados para oferecer uma impressão estável e precisa. A escolha do combo RAMPS 1.4 + Arduino Mega permite grande flexibilidade na configuração e expansão do sistema, além de ser uma opção acessível para projetos DIY.

## 🛠 Configurações e Ajustes no Marlin

Os arquivos deste repositório incluem ajustes específicos no firmware Marlin, como:
Dimensões e limites da impressora: área útil de impressão, offsets e fim de curso.
Velocidades e acelerações otimizadas: para evitar vibrações e melhorar a qualidade das camadas.
Configuração do extrusor: calibração da taxa de passos por mm e controle de temperatura.
Drivers de motores e micropassos: compatível com A4988, DRV8825 e TMC2208.
Ajustes de PID: para controle térmico eficiente no hotend e mesa aquecida.


## 📂 Estrutura do Repositório
Marlin/ – Arquivos principais de configuração do firmware.
Configurations/ – Parâmetros personalizados para esta impressora.
Docs/ – Guias e anotações sobre ajustes e montagem.


## ⚙️ Como Usar
Baixe ou clone este repositório.
Abra o Marlin no VSCode com PlatformIO ou no Arduino IDE.
Ajuste os parâmetros conforme necessário (caso esteja utilizando um hardware diferente).
Compile e faça o upload para o Arduino Mega 2560.


## 🚀 Contribuições e Melhorias
Se você tiver sugestões ou melhorias, sinta-se à vontade para abrir uma issue ou enviar um pull request.

![Versão 1](https://github.com/user-attachments/assets/8f943306-a62e-4ece-9613-cc0caa5d6a11)
