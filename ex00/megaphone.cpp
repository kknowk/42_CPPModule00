/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:49:53 by khorike           #+#    #+#             */
/*   Updated: 2023/08/24 13:09:28 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; ++i)
		{
			std::string arg = av[i];
			for (size_t j = 0; j < arg.size(); ++j)
				std::cout << static_cast<char>(std::toupper(arg[j]));
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

// メモ

// std::string arg クラスのインスタンス（オブジェクト）を作成
// std::string クラスのコンストラクタが char* 型の引数を受け取れるようにオーバーロードされているため可能

// static_cast<char>(std::toupper(arg[j])); toupper の返り値は int なので char にキャスト

// #include <iostream>

// // 整数を二つ受け取る関数のオーバーロード
// int add(int a, int b) {
//     return a + b;
// }

// // 浮動小数点数を二つ受け取る関数のオーバーロード
// double add(double a, double b) {
//     return a + b;
// }

// int main() {
//     std::cout << add(5, 3) << std::endl;        // 整数版のaddが呼ばれる
//     std::cout << add(5.0, 3.2) << std::endl;    // 浮動小数点数版のaddが呼ばれる
//     return 0;
// }
