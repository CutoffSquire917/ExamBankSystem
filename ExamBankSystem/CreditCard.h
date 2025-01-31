#pragma once

#include <string>

class CreditCard
{
private:
	std::string card_number;
	std::string card_date;
	std::string card_secret_number;
	std::string card_color;
public:
	CreditCard(const std::string card_number, const std::string card_date, const std::string card_secret_number, const std::string card_color) :
		card_number(card_number),
		card_date(card_date),
		card_secret_number(card_secret_number),
		card_color(card_color) {
		for (size_t i = 4; i < this->card_number.length(); i += 5) {
			this->card_number.insert(i, " ");
		}
		this->card_date.insert(2, " / ");
	}
	std::string GetCardNumber() const {
		return card_number;
	}
	std::string GetCardDate() const {
		return card_date;
	}
	std::string GetCardSecretNumber() const {
		return card_secret_number;
	}
	std::string GetCardColor() const {
		return card_color;
	}
};

