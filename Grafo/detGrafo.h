#include <iostream>
#include <list>

using namespace std;

template<class V, class E>
class Edge;

template<class V, class E>
class Vertex{
public:
	V m_dato;
	list<Edge<V,E> >m_adyac;
public:
	Vertex(V d){
		m_dato=d;
	}
	bool operator ==(const Vertex<V,E>&V1){
		return m_dato==V1.m_dato;
	}
	bool operator >(const Vertex<V,E>&V1){
		return m_dato > V1.m_dato;
	}
	bool operator <(const Vertex<V,E>&V1){
		return m_dato < V1.m_dato;
	}
};

template<class V, class E>
class Edge{
public:
	E m_dato;
	Vertex<V,E>*m_pDes;
public:
	Edge(E d, Vertex<V,E>*p=0){
		m_dato = d;
		m_pDes = p;
	}
	bool operator ==(const Edge<V,E>&E1){
		return m_dato == E1.m_dato;
	}
	bool operator >(const Edge<V,E>&E1){
		return m_dato > E1.m_dato;
	}
	bool operator <(const Edge<V,E>&E1){
		return m_dato < E1.m_dato;
	}
};
