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

#include "OAIBusinessIntro.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBusinessIntro::OAIBusinessIntro(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBusinessIntro::OAIBusinessIntro() {
    this->initializeModel();
}

OAIBusinessIntro::~OAIBusinessIntro() {}

void OAIBusinessIntro::initializeModel() {

    m_title_isSet = false;
    m_title_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_sticker_isSet = false;
    m_sticker_isValid = false;
}

void OAIBusinessIntro::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBusinessIntro::fromJsonObject(QJsonObject json) {

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_message_isValid = ::tele_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_sticker_isValid = ::tele_rest::fromJsonValue(m_sticker, json[QString("sticker")]);
    m_sticker_isSet = !json[QString("sticker")].isNull() && m_sticker_isValid;
}

QString OAIBusinessIntro::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBusinessIntro::asJsonObject() const {
    QJsonObject obj;
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::tele_rest::toJsonValue(m_message));
    }
    if (m_sticker.isSet()) {
        obj.insert(QString("sticker"), ::tele_rest::toJsonValue(m_sticker));
    }
    return obj;
}

QString OAIBusinessIntro::getTitle() const {
    return m_title;
}
void OAIBusinessIntro::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIBusinessIntro::is_title_Set() const{
    return m_title_isSet;
}

bool OAIBusinessIntro::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIBusinessIntro::getMessage() const {
    return m_message;
}
void OAIBusinessIntro::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIBusinessIntro::is_message_Set() const{
    return m_message_isSet;
}

bool OAIBusinessIntro::is_message_Valid() const{
    return m_message_isValid;
}

OAISticker OAIBusinessIntro::getSticker() const {
    return m_sticker;
}
void OAIBusinessIntro::setSticker(const OAISticker &sticker) {
    m_sticker = sticker;
    m_sticker_isSet = true;
}

bool OAIBusinessIntro::is_sticker_Set() const{
    return m_sticker_isSet;
}

bool OAIBusinessIntro::is_sticker_Valid() const{
    return m_sticker_isValid;
}

bool OAIBusinessIntro::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBusinessIntro::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
