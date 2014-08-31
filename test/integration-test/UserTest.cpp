#include "Client.h"

#include <gmock/gmock.h>
#include <memory>

using namespace Instagram;
using namespace testing;

TEST(UserTest, findsUserById)
{
    ClientPtr client = CreateClient("d7b1086490044ada88da482a87b073f3");

    UserPtr user = client->findUserById("1479058533");

    EXPECT_THAT(user->getId(), StrEq("1479058533"));
    EXPECT_THAT(user->getUsername(), StrEq("coconut_beard"));
    EXPECT_THAT(user->getFullName(), StrEq("CB"));
    EXPECT_THAT(user->getProfilePicture(), StrEq("http://photos-c.ak.instagram.com/hphotos-ak-xaf1/10654924_727813450634146_619431088_a.jpg"));
    EXPECT_THAT(user->getBio(), StrEq("I'm bearded."));
    EXPECT_THAT(user->getWebsite(), StrEq("http://en.wikipedia.org/wiki/Beard"));
    EXPECT_THAT(user->getMediaCount(), 2);
    EXPECT_THAT(user->getFollowsCount(), 2);
    EXPECT_THAT(user->getFollowedByCount(), 1);
}
