#include "tbook.h"
#include <QString>

TBook::TBook()
{
	authorLabel = "Nekiy Chelovek";
	nameLabel = "Istoria o nem";
	countLabel = 666;
}

QString TBook::getAuthor() const
{
	return authorLabel;
}

QString TBook::getName() const
{
	return nameLabel;
}

int TBook::getCount() const
{
	return countLabel;
}
