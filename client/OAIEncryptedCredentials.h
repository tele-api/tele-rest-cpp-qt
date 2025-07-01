/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

/*
 * OAIEncryptedCredentials.h
 *
 * Describes data required for decrypting and authenticating [EncryptedPassportElement](https://core.telegram.org/bots/api/#encryptedpassportelement). See the [Telegram Passport Documentation](https://core.telegram.org/passport#receiving-information) for a complete description of the data decryption and authentication processes.
 */

#ifndef OAIEncryptedCredentials_H
#define OAIEncryptedCredentials_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIEncryptedCredentials : public OAIObject {
public:
    OAIEncryptedCredentials();
    OAIEncryptedCredentials(QString json);
    ~OAIEncryptedCredentials() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getData() const;
    void setData(const QString &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    QString getHash() const;
    void setHash(const QString &hash);
    bool is_hash_Set() const;
    bool is_hash_Valid() const;

    QString getSecret() const;
    void setSecret(const QString &secret);
    bool is_secret_Set() const;
    bool is_secret_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_data;
    bool m_data_isSet;
    bool m_data_isValid;

    QString m_hash;
    bool m_hash_isSet;
    bool m_hash_isValid;

    QString m_secret;
    bool m_secret_isSet;
    bool m_secret_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIEncryptedCredentials)

#endif // OAIEncryptedCredentials_H
