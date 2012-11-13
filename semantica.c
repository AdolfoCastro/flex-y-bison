/* Esta clase es usada para verificar
 * la semantica de un codigo generado
 * por la aplicacion grafica */
 

#include <stdlib.h>
using namespace std;

char cubo [7][7][9] = {{{'i', 'i', 'i', 'i', 'f', 'b', 'b', 'b', 'b'},
			  {'i', 'i', 'i', 'x', 'x', 'b', 'b', 'b', 'b'},
			  {'x', 'f', 'f', 'f', 'f', 'b', 'b', 'b', 'b'},
			  {'x', 'd', 'd', 'd', 'd', 'b', 'b', 'b', 'b'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}},
			 {{'c', 'i', 'i', 'x', 'x', 'b', 'b', 'b', 'b'},
			  {'c', 'c', 'c', 'x', 'x', 'b', 'b', 'b', 'b'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 's', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
		  	  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}},
			 {{'f', 'f', 'f', 'f', 'f', 'b', 'b', 'b', 'b'},
			  {'x', 'f', 'f', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'f', 'f', 'f', 'f', 'f', 'b', 'b', 'b', 'b'},
			  {'f', 'f', 'f', 'f', 'f', 'b', 'b', 'b', 'b'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}},
			 {{'d', 'd', 'd', 'd', 'd', 'b', 'b', 'b', 'b'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'d', 'd', 'd', 'd', 'd', 'b', 'b', 'b', 'b'},
			  {'d', 'd', 'd', 'd', 'd', 'b', 'b', 'b', 'b'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}},
			 {{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'b', 'x', 'x', 'x', 'x', 'b', 'b', 'b', 'b'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}},
			 {{'x', 's', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'s', 's', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 's', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 's', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'s', 's', 'x', 'x', 'x', 'b', 'b', 'b', 'b'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}},
			 {{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
			  {'l', 'l', 'x', 'x', 'x', 'b', 'b', 'b', 'b'}}};
string variables [255][3];
int variables_size = 0;
string procesos [255][2];
int procesos_size = 0;

/* Inicializa el cubo de semantica
 * Las primeras y segundas dimensiones son:
 * Opcion 0: int
 * Opcion 1: char
 * Opcion 2: float
 * Opcion 3: double
 * Opcion 4: boolean
 * Opcion 5: string
 * Opcion 6: List 
 * La tercera dimension es:
 * Opcion 0: '='
 * Opcion 1: '+'
 * Opcion 2: '-'
 * Opcion 3: '*'
 * Opcion 4: '/'
 * Opcion 5: '>'
 * Opcion 6: '<'
 * Opcion 7: '<>' 
 * Opcion 8: '==' */
void initialize ()
{
}

/* Este método se encarga de mantener la tabla
 * de variables dentro de un programa */
string tablaVariables (string ids, string type, char scope)
{
	int separator_begin = 0;
	int separator_end = 0;
	string id;
	do
	{
		if (ids.find(',',separator_end) != -1)
		{
			separator_begin = separator_end;
			separator_end = ids.find(',',separator_end);
			id = ids.substr(separator_begin, separator_end-separator_begin);
		}
		else
		{
			separator_begin = separator_end;
			separator_end = ids.find(',',separator_end);
			id = ids.substr(separator_begin+1);
		}
		for (int i = 0; i< variables_size; i++)
		{
			if (variables[i][0].compare(id) == 0 && variables[i][2].compare(scope + "") == 0)
			{
				return "variable name has been declared";
			}
		}
		variables[variables_size][0] = id;
		variables[variables_size][1] = type;
		variables[variables_size][2] = scope;
		variables_size++;
	} while (separator_end != -1);
	return "";
}

/* Este método se encarga de mantener el directorio
 * de procesos dentro de un programa */
string directorioProcesos (string id, string type)
{
	for (int i = 0; i< procesos_size; i++)
	{
		if (procesos[i][0].compare(id) == 0 && procesos[i][1].compare(type) == 0)
		{
			return "function name has been declared";
		}
	}
	procesos[procesos_size][0] = id;
	procesos[procesos_size][1] = type;
	procesos_size++;
	return "";
}

int main ()
{
  ifstream myfile;
  char scope = 'G';
  string line;
  string error;
  string opciones [] = {"int", "char", "float", "double", "boolean", "string", "List"};
  initialize ();
  myfile.open ("inputcode.patito");
  if (myfile.is_open())
  {
	while (!myfile.eof())
	{
		getline (myfile, line);
		for (int i=0; i<7; i++)
		{
			if (line.compare (0,opciones[i].size(), opciones[i]) == 0)
			{
				int id_end = line.find (" ", opciones[i].size()+1);
				int line_end = line.find (";", opciones[i].size()+1);
				string id = line.substr (opciones[i].size()+1, id_end-(opciones[i].size()+1));
				if (id_end != line_end)
				{
					if (line.find ("(", id_end+1) != -1)
					{
						error = directorioProcesos(id, opciones[i]);
						if (error.compare("") != 0)
						{
							cout << error;
							exit(-1);
						}
						scope = 'L';
					}
				}
				tablaVariables(id,opciones[i],scope);
			}
		}
		if (line.compare (0,1,"{") == 0 || line.compare (line.size()-1,line.size(),"{") == 0)
		{
			if (scope == 'G')
				scope = 'L';
			else
				scope = 'T';
		}
		if (line.compare (0,1,"}") == 0 || line.compare (line.size()-1,line.size(),"}") == 0)
		{
			if (scope == 'T')
				scope = 'L';
			else
				scope = 'G';
		}
	}
	myfile.close();
  }
  else cout << "Unable to open file";
  return 0;
}