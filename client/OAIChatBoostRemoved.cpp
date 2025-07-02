/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIChatBoostRemoved.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatBoostRemoved::OAIChatBoostRemoved(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatBoostRemoved::OAIChatBoostRemoved() {
    this->initializeModel();
}

OAIChatBoostRemoved::~OAIChatBoostRemoved() {}

void OAIChatBoostRemoved::initializeModel() {

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_boost_id_isSet = false;
    m_boost_id_isValid = false;

    m_remove_date_isSet = false;
    m_remove_date_isValid = false;

    m_source_isSet = false;
    m_source_isValid = false;
}

void OAIChatBoostRemoved::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatBoostRemoved::fromJsonObject(QJsonObject json) {

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_boost_id_isValid = ::tele_rest::fromJsonValue(m_boost_id, json[QString("boost_id")]);
    m_boost_id_isSet = !json[QString("boost_id")].isNull() && m_boost_id_isValid;

    m_remove_date_isValid = ::tele_rest::fromJsonValue(m_remove_date, json[QString("remove_date")]);
    m_remove_date_isSet = !json[QString("remove_date")].isNull() && m_remove_date_isValid;

    m_source_isValid = ::tele_rest::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;
}

QString OAIChatBoostRemoved::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatBoostRemoved::asJsonObject() const {
    QJsonObject obj;
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_boost_id_isSet) {
        obj.insert(QString("boost_id"), ::tele_rest::toJsonValue(m_boost_id));
    }
    if (m_remove_date_isSet) {
        obj.insert(QString("remove_date"), ::tele_rest::toJsonValue(m_remove_date));
    }
    if (m_source.isSet()) {
        obj.insert(QString("source"), ::tele_rest::toJsonValue(m_source));
    }
    return obj;
}

OAIChat OAIChatBoostRemoved::getChat() const {
    return m_chat;
}
void OAIChatBoostRemoved::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIChatBoostRemoved::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIChatBoostRemoved::is_chat_Valid() const{
    return m_chat_isValid;
}

QString OAIChatBoostRemoved::getBoostId() const {
    return m_boost_id;
}
void OAIChatBoostRemoved::setBoostId(const QString &boost_id) {
    m_boost_id = boost_id;
    m_boost_id_isSet = true;
}

bool OAIChatBoostRemoved::is_boost_id_Set() const{
    return m_boost_id_isSet;
}

bool OAIChatBoostRemoved::is_boost_id_Valid() const{
    return m_boost_id_isValid;
}

qint32 OAIChatBoostRemoved::getRemoveDate() const {
    return m_remove_date;
}
void OAIChatBoostRemoved::setRemoveDate(const qint32 &remove_date) {
    m_remove_date = remove_date;
    m_remove_date_isSet = true;
}

bool OAIChatBoostRemoved::is_remove_date_Set() const{
    return m_remove_date_isSet;
}

bool OAIChatBoostRemoved::is_remove_date_Valid() const{
    return m_remove_date_isValid;
}

OAIChatBoostSource OAIChatBoostRemoved::getSource() const {
    return m_source;
}
void OAIChatBoostRemoved::setSource(const OAIChatBoostSource &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIChatBoostRemoved::is_source_Set() const{
    return m_source_isSet;
}

bool OAIChatBoostRemoved::is_source_Valid() const{
    return m_source_isValid;
}

bool OAIChatBoostRemoved::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_boost_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_remove_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatBoostRemoved::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_isValid && m_boost_id_isValid && m_remove_date_isValid && m_source_isValid && true;
}

} // namespace tele_rest
