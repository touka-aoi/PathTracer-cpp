#include "Vec.h"
#include <iostream>

const double eps = 1e-6;

Vec trace1()
{
	if (depth >= 20) return;
	double t;
	// オブジェクトID
	int id = -1;
	// 無限遠
	double mint = inf;
	// objectの数をカウント
	const unsigned int size = scene.size();

	// すべてのオブジェクトに対して交差判定を行う
	for (unsigned int x = 0; x < size; x++)
	{
		// 接触した場所を取得
		t = scene[x]->intersect(ray);
		// 自己接触、一番最初に接触したオブジェクトを取得する
		if (t > eps && t < mint) { mint = t; id = x; }
	}
	// 接触なしの場合終了
	if (id == -1) return;
	// hitした場所を取得
	Vec hp = ray.o + ray.d * mint;
	// hitした場所のオブジェクトのノーマルを取得
	Vec N = scene[id]->normal(hp);
	// ヒットした場所をrayの始点に変更
	ray.o = hp;
	// emissionを加える 2はマジックナンバー
	clr = clr + Vec(scene[id]->emission, scene[id]->emssion, scene[id]->emission) * 2;
}

double rrFactor = 1;
if (depth >= 5)
{

}


int main()
{

}