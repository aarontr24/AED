#include "detGrafo.h"
template<class V, class E>
class Grafo{
private:
	list<Vertex<V,E> >m_G;
public:
	Grafo(){};
	void add_Vertex(V D);
	void add_Edge(V V1, V V2, E d);
	Vertex<V,E>* find_Vertex(V d);
};

template<class V, class E>
void Grafo<V,E>::add_Vertex(V D){
	m_G.push_back(Vertex<V,E>(D));
};

template<class V, class E>
void Grafo<V,E>::add_Edge(V V1, V V2, E A){
	Vertex<V,E> *p = find_Vertex(V1);
	Vertex<V,E> *q = find_Vertex(V2);
	if(p&&q){
		p->m_adyac.push_back(Edge<V,E>(A,q));
		q->m_adyac.push_back(Edge<V,E>(A,p));
	}
};

template<class V, class E>
Vertex<V,E>* Grafo<V,E>::find_Vertex(V d){
	Vertex<V,E>*temp;
	typename list<Vertex<V, E> >::iterator iter=m_G.begin();
	while(iter != m_G.end()){
		if((*iter).m_dato == d){
			temp=&(*iter);
			return temp;
		}
		iter++;
	}
	//return temp;
}