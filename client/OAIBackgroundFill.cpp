/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIBackgroundFill.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBackgroundFill::OAIBackgroundFill(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBackgroundFill::OAIBackgroundFill() {
    this->initializeModel();
}

OAIBackgroundFill::~OAIBackgroundFill() {}

void OAIBackgroundFill::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_color_isSet = false;
    m_color_isValid = false;

    m_top_color_isSet = false;
    m_top_color_isValid = false;

    m_bottom_color_isSet = false;
    m_bottom_color_isValid = false;

    m_rotation_angle_isSet = false;
    m_rotation_angle_isValid = false;

    m_colors_isSet = false;
    m_colors_isValid = false;
}

void OAIBackgroundFill::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBackgroundFill::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_color_isValid = ::tele_rest::fromJsonValue(m_color, json[QString("color")]);
    m_color_isSet = !json[QString("color")].isNull() && m_color_isValid;

    m_top_color_isValid = ::tele_rest::fromJsonValue(m_top_color, json[QString("top_color")]);
    m_top_color_isSet = !json[QString("top_color")].isNull() && m_top_color_isValid;

    m_bottom_color_isValid = ::tele_rest::fromJsonValue(m_bottom_color, json[QString("bottom_color")]);
    m_bottom_color_isSet = !json[QString("bottom_color")].isNull() && m_bottom_color_isValid;

    m_rotation_angle_isValid = ::tele_rest::fromJsonValue(m_rotation_angle, json[QString("rotation_angle")]);
    m_rotation_angle_isSet = !json[QString("rotation_angle")].isNull() && m_rotation_angle_isValid;

    m_colors_isValid = ::tele_rest::fromJsonValue(m_colors, json[QString("colors")]);
    m_colors_isSet = !json[QString("colors")].isNull() && m_colors_isValid;
}

QString OAIBackgroundFill::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBackgroundFill::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_color_isSet) {
        obj.insert(QString("color"), ::tele_rest::toJsonValue(m_color));
    }
    if (m_top_color_isSet) {
        obj.insert(QString("top_color"), ::tele_rest::toJsonValue(m_top_color));
    }
    if (m_bottom_color_isSet) {
        obj.insert(QString("bottom_color"), ::tele_rest::toJsonValue(m_bottom_color));
    }
    if (m_rotation_angle_isSet) {
        obj.insert(QString("rotation_angle"), ::tele_rest::toJsonValue(m_rotation_angle));
    }
    if (m_colors.size() > 0) {
        obj.insert(QString("colors"), ::tele_rest::toJsonValue(m_colors));
    }
    return obj;
}

QString OAIBackgroundFill::getType() const {
    return m_type;
}
void OAIBackgroundFill::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIBackgroundFill::is_type_Set() const{
    return m_type_isSet;
}

bool OAIBackgroundFill::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIBackgroundFill::getColor() const {
    return m_color;
}
void OAIBackgroundFill::setColor(const qint32 &color) {
    m_color = color;
    m_color_isSet = true;
}

bool OAIBackgroundFill::is_color_Set() const{
    return m_color_isSet;
}

bool OAIBackgroundFill::is_color_Valid() const{
    return m_color_isValid;
}

qint32 OAIBackgroundFill::getTopColor() const {
    return m_top_color;
}
void OAIBackgroundFill::setTopColor(const qint32 &top_color) {
    m_top_color = top_color;
    m_top_color_isSet = true;
}

bool OAIBackgroundFill::is_top_color_Set() const{
    return m_top_color_isSet;
}

bool OAIBackgroundFill::is_top_color_Valid() const{
    return m_top_color_isValid;
}

qint32 OAIBackgroundFill::getBottomColor() const {
    return m_bottom_color;
}
void OAIBackgroundFill::setBottomColor(const qint32 &bottom_color) {
    m_bottom_color = bottom_color;
    m_bottom_color_isSet = true;
}

bool OAIBackgroundFill::is_bottom_color_Set() const{
    return m_bottom_color_isSet;
}

bool OAIBackgroundFill::is_bottom_color_Valid() const{
    return m_bottom_color_isValid;
}

qint32 OAIBackgroundFill::getRotationAngle() const {
    return m_rotation_angle;
}
void OAIBackgroundFill::setRotationAngle(const qint32 &rotation_angle) {
    m_rotation_angle = rotation_angle;
    m_rotation_angle_isSet = true;
}

bool OAIBackgroundFill::is_rotation_angle_Set() const{
    return m_rotation_angle_isSet;
}

bool OAIBackgroundFill::is_rotation_angle_Valid() const{
    return m_rotation_angle_isValid;
}

QList<qint32> OAIBackgroundFill::getColors() const {
    return m_colors;
}
void OAIBackgroundFill::setColors(const QList<qint32> &colors) {
    m_colors = colors;
    m_colors_isSet = true;
}

bool OAIBackgroundFill::is_colors_Set() const{
    return m_colors_isSet;
}

bool OAIBackgroundFill::is_colors_Valid() const{
    return m_colors_isValid;
}

bool OAIBackgroundFill::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_top_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bottom_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rotation_angle_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_colors.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBackgroundFill::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_color_isValid && m_top_color_isValid && m_bottom_color_isValid && m_rotation_angle_isValid && m_colors_isValid && true;
}

} // namespace tele_rest
