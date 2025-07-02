/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIStoryAreaType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIStoryAreaType::OAIStoryAreaType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStoryAreaType::OAIStoryAreaType() {
    this->initializeModel();
}

OAIStoryAreaType::~OAIStoryAreaType() {}

void OAIStoryAreaType::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_reaction_type_isSet = false;
    m_reaction_type_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_temperature_isSet = false;
    m_temperature_isValid = false;

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_background_color_isSet = false;
    m_background_color_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_is_dark_isSet = false;
    m_is_dark_isValid = false;

    m_is_flipped_isSet = false;
    m_is_flipped_isValid = false;
}

void OAIStoryAreaType::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStoryAreaType::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_reaction_type_isValid = ::tele_rest::fromJsonValue(m_reaction_type, json[QString("reaction_type")]);
    m_reaction_type_isSet = !json[QString("reaction_type")].isNull() && m_reaction_type_isValid;

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_temperature_isValid = ::tele_rest::fromJsonValue(m_temperature, json[QString("temperature")]);
    m_temperature_isSet = !json[QString("temperature")].isNull() && m_temperature_isValid;

    m_emoji_isValid = ::tele_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_background_color_isValid = ::tele_rest::fromJsonValue(m_background_color, json[QString("background_color")]);
    m_background_color_isSet = !json[QString("background_color")].isNull() && m_background_color_isValid;

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_address_isValid = ::tele_rest::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_is_dark_isValid = ::tele_rest::fromJsonValue(m_is_dark, json[QString("is_dark")]);
    m_is_dark_isSet = !json[QString("is_dark")].isNull() && m_is_dark_isValid;

    m_is_flipped_isValid = ::tele_rest::fromJsonValue(m_is_flipped, json[QString("is_flipped")]);
    m_is_flipped_isSet = !json[QString("is_flipped")].isNull() && m_is_flipped_isValid;
}

QString OAIStoryAreaType::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStoryAreaType::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_latitude_isSet) {
        obj.insert(QString("latitude"), ::tele_rest::toJsonValue(m_latitude));
    }
    if (m_longitude_isSet) {
        obj.insert(QString("longitude"), ::tele_rest::toJsonValue(m_longitude));
    }
    if (m_reaction_type.isSet()) {
        obj.insert(QString("reaction_type"), ::tele_rest::toJsonValue(m_reaction_type));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_temperature_isSet) {
        obj.insert(QString("temperature"), ::tele_rest::toJsonValue(m_temperature));
    }
    if (m_emoji_isSet) {
        obj.insert(QString("emoji"), ::tele_rest::toJsonValue(m_emoji));
    }
    if (m_background_color_isSet) {
        obj.insert(QString("background_color"), ::tele_rest::toJsonValue(m_background_color));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::tele_rest::toJsonValue(m_name));
    }
    if (m_address.isSet()) {
        obj.insert(QString("address"), ::tele_rest::toJsonValue(m_address));
    }
    if (m_is_dark_isSet) {
        obj.insert(QString("is_dark"), ::tele_rest::toJsonValue(m_is_dark));
    }
    if (m_is_flipped_isSet) {
        obj.insert(QString("is_flipped"), ::tele_rest::toJsonValue(m_is_flipped));
    }
    return obj;
}

QString OAIStoryAreaType::getType() const {
    return m_type;
}
void OAIStoryAreaType::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIStoryAreaType::is_type_Set() const{
    return m_type_isSet;
}

bool OAIStoryAreaType::is_type_Valid() const{
    return m_type_isValid;
}

double OAIStoryAreaType::getLatitude() const {
    return m_latitude;
}
void OAIStoryAreaType::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAIStoryAreaType::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAIStoryAreaType::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAIStoryAreaType::getLongitude() const {
    return m_longitude;
}
void OAIStoryAreaType::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAIStoryAreaType::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAIStoryAreaType::is_longitude_Valid() const{
    return m_longitude_isValid;
}

OAIReactionType OAIStoryAreaType::getReactionType() const {
    return m_reaction_type;
}
void OAIStoryAreaType::setReactionType(const OAIReactionType &reaction_type) {
    m_reaction_type = reaction_type;
    m_reaction_type_isSet = true;
}

bool OAIStoryAreaType::is_reaction_type_Set() const{
    return m_reaction_type_isSet;
}

bool OAIStoryAreaType::is_reaction_type_Valid() const{
    return m_reaction_type_isValid;
}

QString OAIStoryAreaType::getUrl() const {
    return m_url;
}
void OAIStoryAreaType::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIStoryAreaType::is_url_Set() const{
    return m_url_isSet;
}

bool OAIStoryAreaType::is_url_Valid() const{
    return m_url_isValid;
}

double OAIStoryAreaType::getTemperature() const {
    return m_temperature;
}
void OAIStoryAreaType::setTemperature(const double &temperature) {
    m_temperature = temperature;
    m_temperature_isSet = true;
}

bool OAIStoryAreaType::is_temperature_Set() const{
    return m_temperature_isSet;
}

bool OAIStoryAreaType::is_temperature_Valid() const{
    return m_temperature_isValid;
}

QString OAIStoryAreaType::getEmoji() const {
    return m_emoji;
}
void OAIStoryAreaType::setEmoji(const QString &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAIStoryAreaType::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAIStoryAreaType::is_emoji_Valid() const{
    return m_emoji_isValid;
}

qint32 OAIStoryAreaType::getBackgroundColor() const {
    return m_background_color;
}
void OAIStoryAreaType::setBackgroundColor(const qint32 &background_color) {
    m_background_color = background_color;
    m_background_color_isSet = true;
}

bool OAIStoryAreaType::is_background_color_Set() const{
    return m_background_color_isSet;
}

bool OAIStoryAreaType::is_background_color_Valid() const{
    return m_background_color_isValid;
}

QString OAIStoryAreaType::getName() const {
    return m_name;
}
void OAIStoryAreaType::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIStoryAreaType::is_name_Set() const{
    return m_name_isSet;
}

bool OAIStoryAreaType::is_name_Valid() const{
    return m_name_isValid;
}

OAILocationAddress OAIStoryAreaType::getAddress() const {
    return m_address;
}
void OAIStoryAreaType::setAddress(const OAILocationAddress &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAIStoryAreaType::is_address_Set() const{
    return m_address_isSet;
}

bool OAIStoryAreaType::is_address_Valid() const{
    return m_address_isValid;
}

bool OAIStoryAreaType::isIsDark() const {
    return m_is_dark;
}
void OAIStoryAreaType::setIsDark(const bool &is_dark) {
    m_is_dark = is_dark;
    m_is_dark_isSet = true;
}

bool OAIStoryAreaType::is_is_dark_Set() const{
    return m_is_dark_isSet;
}

bool OAIStoryAreaType::is_is_dark_Valid() const{
    return m_is_dark_isValid;
}

bool OAIStoryAreaType::isIsFlipped() const {
    return m_is_flipped;
}
void OAIStoryAreaType::setIsFlipped(const bool &is_flipped) {
    m_is_flipped = is_flipped;
    m_is_flipped_isSet = true;
}

bool OAIStoryAreaType::is_is_flipped_Set() const{
    return m_is_flipped_isSet;
}

bool OAIStoryAreaType::is_is_flipped_Valid() const{
    return m_is_flipped_isValid;
}

bool OAIStoryAreaType::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_latitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_longitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reaction_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_temperature_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_background_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_address.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_dark_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_flipped_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStoryAreaType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_latitude_isValid && m_longitude_isValid && m_reaction_type_isValid && m_url_isValid && m_temperature_isValid && m_emoji_isValid && m_background_color_isValid && m_name_isValid && true;
}

} // namespace tele_rest
