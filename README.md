# Raspberry-MQTT-data-transfer
Transferência de dados utilizando uma Raspberry, adquirindo dados via USB de diferentes sensores, e transmitindo para um broker online via MQTT para uma dashboard.   


## Estrura das pastas do projeto
* Raspberry - Código instalado no raspberry pi, no qual faz a leitura dos sensores e envia para o broker via MQTT.
* Exemplos Sensores - Códigos de diferentes tipos de sensores que enviam seus dados via serial.
* Dashboard - Painel de visualização das transmissão dos dados em tempo real. O Painel faz a leitura direto do broker. 

## Configurações do ambiente
### Dashboard

```shell
python -m pip install --upgrade pip
python -m venv .venv
```

* Ativar o ambiente virtual
Navegue até a pasta do projeto e execute o comando:  
   - Windows
   ```shell
  .venv/Scripts/activate
   ```

  - Linux
  ```shell
  source .\.venv\bin\activate
  ```
    
* Instalando as dependências do projeto
```shell
pip install -r .\requirements.txt
```


#### Rodando a aplicação:
* Para executar a Dashboard
Navegue até a pasta ***dashboard*** e execute o comando:  

```shell
streamlit run .\main.py
```  

### Raspberry
#### Rodando a aplicação:

* Ativar o ambiente virtual
Navegue até a pasta do projeto e execute o comando:  
```shell
 source .venv\bin\activate
 ```

* Instalando as dependências do projeto
```shell
pip install -r .\requirements.txt
```

* Para executar o Client (raspberrypi) 
Navegue até a pasta ***client*** e execute o comando:    

```shell
python3 app.py
```
