#include <base/includes>

FUNC _SSTRING getCommandOutput(_SSTRING command,_SIZE sizeOfCommand)
{
    _CHARBUFF(output,_LBASEBUFFSIZE);
    _CHARBUFF(input,_BASEBUFFSIZE);

    input = "/bin/";
    _FOR(_ITERSML(sizeOfCommand),_IINC)

}