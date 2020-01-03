#include<unordered_map>
using namespace std;

class TrieNode{
	char data;
	bool is_terminal;
	unordered_map<char,TrieNode*> children;
	public:
		TrieNode(char data){
			is_terminal =false;
			this->data=data;
		}
	friend class Trie;
};

class Trie{
	TrieNode* root;
	int numWords;
	public:
		Trie(){
			root= new TrieNode('\0');
			numWords=0;
		}
		int size(){
			return numWords;
		}
	private: 
		static void insert(char* word, TrieNode* node){
			int n=strlen(word);
			if(n==0){
				if(node->is_terminal==true){
					return false;
				}
				node->is_terminal=true;
				return;
			}
			if(root->children.count(word[0])==0){
				TrieNode* child = new TrieNode(word[0]);
				root->children[word[0]]=child;
			}
			TrieNode* child = root->children[word[0]];
			insert(word+1);
		}
	public:
		void remove(){
			
		}
		bool find(){
			
		}
		void insert(char* word){
			if(insert(word,root))
				numWords++;
		}
			
			
			
			
			
};