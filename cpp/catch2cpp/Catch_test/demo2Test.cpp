#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "perros/Perros.h"
TEST_CASE( "Validar edad de Perros", "[edadEquivalente]" ){
    REQUIRE( edadEquivalente(1) == 10.5 );
    REQUIRE( edadEquivalente(2) == 21.0 );
    REQUIRE( edadEquivalente(3) == 30 );
}
