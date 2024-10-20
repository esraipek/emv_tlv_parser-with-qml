import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15

Window {
    width: 1000
    height: 1000
    visible: true

    GroupBox {
        anchors.centerIn: parent
        width: 1000
        height: 1000
        Column {
            anchors.centerIn: parent
            spacing: 20  // Space between elements

            TextField {
                id: aa
                width: 900
                height: 50
                font.pointSize: 20
                background: Rectangle {
                    color: "yellow"
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Button {
                text: "PARSE"
                width: 200
                height: 50
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    parser.onPushButtonClicked(aa.text);
                }
            }

            TextArea {
                id: bb
                width: 900
                height: 800
                font.pointSize: 20
                background: Rectangle {
                    color: "steelblue"
                }
                 wrapMode: TextArea.Wrap
                anchors.horizontalCenter: parent.horizontalCenter
                readOnly: true

            }
        }
    }


    // Updated Connections block
    Connections {
        target: parser
        onUpdateTextField: {
            bb.text = text;
        }
    }
}
