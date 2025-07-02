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

#include "OAIChatPhoto.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatPhoto::OAIChatPhoto(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatPhoto::OAIChatPhoto() {
    this->initializeModel();
}

OAIChatPhoto::~OAIChatPhoto() {}

void OAIChatPhoto::initializeModel() {

    m_small_file_id_isSet = false;
    m_small_file_id_isValid = false;

    m_small_file_unique_id_isSet = false;
    m_small_file_unique_id_isValid = false;

    m_big_file_id_isSet = false;
    m_big_file_id_isValid = false;

    m_big_file_unique_id_isSet = false;
    m_big_file_unique_id_isValid = false;
}

void OAIChatPhoto::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatPhoto::fromJsonObject(QJsonObject json) {

    m_small_file_id_isValid = ::tele_rest::fromJsonValue(m_small_file_id, json[QString("small_file_id")]);
    m_small_file_id_isSet = !json[QString("small_file_id")].isNull() && m_small_file_id_isValid;

    m_small_file_unique_id_isValid = ::tele_rest::fromJsonValue(m_small_file_unique_id, json[QString("small_file_unique_id")]);
    m_small_file_unique_id_isSet = !json[QString("small_file_unique_id")].isNull() && m_small_file_unique_id_isValid;

    m_big_file_id_isValid = ::tele_rest::fromJsonValue(m_big_file_id, json[QString("big_file_id")]);
    m_big_file_id_isSet = !json[QString("big_file_id")].isNull() && m_big_file_id_isValid;

    m_big_file_unique_id_isValid = ::tele_rest::fromJsonValue(m_big_file_unique_id, json[QString("big_file_unique_id")]);
    m_big_file_unique_id_isSet = !json[QString("big_file_unique_id")].isNull() && m_big_file_unique_id_isValid;
}

QString OAIChatPhoto::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatPhoto::asJsonObject() const {
    QJsonObject obj;
    if (m_small_file_id_isSet) {
        obj.insert(QString("small_file_id"), ::tele_rest::toJsonValue(m_small_file_id));
    }
    if (m_small_file_unique_id_isSet) {
        obj.insert(QString("small_file_unique_id"), ::tele_rest::toJsonValue(m_small_file_unique_id));
    }
    if (m_big_file_id_isSet) {
        obj.insert(QString("big_file_id"), ::tele_rest::toJsonValue(m_big_file_id));
    }
    if (m_big_file_unique_id_isSet) {
        obj.insert(QString("big_file_unique_id"), ::tele_rest::toJsonValue(m_big_file_unique_id));
    }
    return obj;
}

QString OAIChatPhoto::getSmallFileId() const {
    return m_small_file_id;
}
void OAIChatPhoto::setSmallFileId(const QString &small_file_id) {
    m_small_file_id = small_file_id;
    m_small_file_id_isSet = true;
}

bool OAIChatPhoto::is_small_file_id_Set() const{
    return m_small_file_id_isSet;
}

bool OAIChatPhoto::is_small_file_id_Valid() const{
    return m_small_file_id_isValid;
}

QString OAIChatPhoto::getSmallFileUniqueId() const {
    return m_small_file_unique_id;
}
void OAIChatPhoto::setSmallFileUniqueId(const QString &small_file_unique_id) {
    m_small_file_unique_id = small_file_unique_id;
    m_small_file_unique_id_isSet = true;
}

bool OAIChatPhoto::is_small_file_unique_id_Set() const{
    return m_small_file_unique_id_isSet;
}

bool OAIChatPhoto::is_small_file_unique_id_Valid() const{
    return m_small_file_unique_id_isValid;
}

QString OAIChatPhoto::getBigFileId() const {
    return m_big_file_id;
}
void OAIChatPhoto::setBigFileId(const QString &big_file_id) {
    m_big_file_id = big_file_id;
    m_big_file_id_isSet = true;
}

bool OAIChatPhoto::is_big_file_id_Set() const{
    return m_big_file_id_isSet;
}

bool OAIChatPhoto::is_big_file_id_Valid() const{
    return m_big_file_id_isValid;
}

QString OAIChatPhoto::getBigFileUniqueId() const {
    return m_big_file_unique_id;
}
void OAIChatPhoto::setBigFileUniqueId(const QString &big_file_unique_id) {
    m_big_file_unique_id = big_file_unique_id;
    m_big_file_unique_id_isSet = true;
}

bool OAIChatPhoto::is_big_file_unique_id_Set() const{
    return m_big_file_unique_id_isSet;
}

bool OAIChatPhoto::is_big_file_unique_id_Valid() const{
    return m_big_file_unique_id_isValid;
}

bool OAIChatPhoto::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_small_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_small_file_unique_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_big_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_big_file_unique_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatPhoto::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_small_file_id_isValid && m_small_file_unique_id_isValid && m_big_file_id_isValid && m_big_file_unique_id_isValid && true;
}

} // namespace tele_rest
