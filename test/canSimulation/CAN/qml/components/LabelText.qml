import QtQuick 2.0
import "."

Rectangle {

    id: root

    property variant dataText: "Default"
    property string textLabel: "Not initialised"

    width: Style.textBoxWidth
    height: Style.textBoxHeight
    radius: Style.radius
    anchors.left: parent.left
    anchors.leftMargin: Style.labelTextLeftMargin
    color: Style.colorLabelTextBackground

    Text {
        id: label
        anchors.leftMargin: 5
        anchors.left: root.left
        text: root.textLabel
        width: Style.labelWidth
        verticalAlignment: Text.AlignVCenter
        height: root.height
    }

    CastomInput {
        id: input

        anchors.right: root.right
        textInput: root.dataText
        widthInput: Style.widthInput
        onTextInputChanged: {
            root.dataText = textInput;
        }
        Connections {
            target: root
            onDataTextChanged: {
                input.textInput = root.dataText
            }
        }
    }
}
