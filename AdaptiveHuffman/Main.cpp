#include <stdio.h>

#include <bitset>
#include "Tree.h"


#include "AdaHuffman.h"




int main() {




	/*Tree* tree = new Tree();
	std::string p = "bookkeeper";
	
	for (int i = 0; i < p.size(); i++) {
		tree->updateTree(p[i]);
	}
	

	tree->print();
	std::string s;
	std::string out;
	Node * l;
	bool found = tree->getNode(tree->root, 'k', l);
	if (found) {
		std::cout << l->weight;
	}
*/
	/*std::string o;
	std::string s;
	tree->getNullNodeCode(tree->root, s, o);
	std::cout << o.data();
	*/

	//std::cout << out2.data();


	/*std::string s;
	std::string out="";
	asciToBits('c', s);


	bitstoAsci(s, out);
	std::cout << out.data();
	std::cout << "---------------------------------------\n";
	bitstoAsci(s, out);
	std::cout << out.data();*/


	AdaHuffman f;
	std::string in = "a----aaaa---a---rrr--a";
	std::string out;
	std::string out1;
	f.compress(in,out);
	f.decompress(out, out1);

	std::cout << in.size()<<"\n";

	std::cout << out.size() / 8 <<"\n";

	std::cout << out1.data();

	getchar();
	return 1;
}